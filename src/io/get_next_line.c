/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:26:34 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:26:51 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

#include <unistd.h>

#ifndef _GNL_BUFFER_SIZE_
# define _GNL_BUFFER_SIZE_ 1024
#endif

#ifndef _GNL_NULL_CHECK_
# define _GNL_NULL_CHECK_(x) if (!(x)) return (-1);
#endif

#ifndef _GNL_ERR_CHECK_
# define _GNL_ERR_CHECK_(x, y, z) if ((x) < 0 || !(y) || (z) < 0) return (-1);
#endif

#ifndef _GNL_BREAKER_
# define _GNL_BREAKER_(x) if (x) break;
#endif

static t_list		*get_current(t_list **list, const int fd)
{
	t_list			*temp;

	temp = *list;
	while (temp)
	{
		if ((int)temp->content_size == fd)
			return (temp);
		temp = temp->next;
	}
	RETN_IF_NULL((temp = (t_list *)ft_memalloc(sizeof(t_list))));
	RETN_IF_NULL((temp->content = ft_strnew(0)));
	temp->content_size = fd;
	ft_lstadd_before(list, temp);
	return (temp);
}

static t_ull		strcpy_to(char **dst, char *src)
{
	t_ull			dst_len;
	t_ull			i;

	dst_len = (ft_strlen(src) + 1) * sizeof(char);
	*dst = (char *)ft_memalloc(dst_len);
	RETN_IF_NULL(((t_ull)(*dst)));
	i = 0;
	while (*(src + i) != '\0' && *(src + i) != '\n')
	{
		*(*dst + i) = *(src + i);
		++i;
	}
	*(*dst + i) = '\0';
	return (i);
}

static int			init_line(char **line, t_list **current)
{
	t_ull			i;
	char			*tmp;
	t_ull			len;

	RETN_IF_NULL((i = strcpy_to(line, (*current)->content)));
	len = ft_strlen((*current)->content);
	tmp = 0;
	if (i < len)
	{
		tmp = ft_strsub((*current)->content, i + 1, len - i - 1);
		RETN_IF_NULL(((t_ull)tmp));
	}
	ft_memdel((void **)(&(*current)->content));
	(*current)->content = tmp;
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	char			buf[_GNL_BUFFER_SIZE_ + 1];
	static t_list	*list;
	int				i;
	t_list			*current;
	char			*tmp;

	_GNL_ERR_CHECK_(fd, line, read(fd, buf, 0));
	_GNL_NULL_CHECK_((current = get_current(&list, fd)));
	while ((i = read(fd, buf, _GNL_BUFFER_SIZE_)) > 0)
	{
		buf[i] = 0;
		_GNL_NULL_CHECK_((tmp = ft_strjoin(current->content, buf)));
		ft_memdel((void **)(&current->content));
		_GNL_NULL_CHECK_((current->content = ft_strdup(tmp)));
		ft_memdel((void **)(&tmp));
		_GNL_BREAKER_(ft_strchr(buf, '\n'));
	}
	if (i < _GNL_BUFFER_SIZE_ && !(current->content))
	{
		ft_memdel((void **)(&current));
		return (0);
	}
	_GNL_NULL_CHECK_(init_line(line, &current));
	return (1);
}
