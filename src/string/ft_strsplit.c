/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:23:31 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 19:17:10 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

static t_ull	get_count(char const *s, char c)
{
	t_ull		count;
	t_ull		i;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i))
			count++;
		while (*(s + i) != c && *(s + i))
			i++;
	}
	return (count);
}

static t_ull	get_length(char const *s, char c)
{
	t_ull		length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		++s;
	}
	return (length);
}

static void		deleter(char **box)
{
	while (*box)
	{
		ft_strdel(box);
		box++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	t_ull		i;
	t_ull		parts;
	t_ull		length;
	char		**box;

	if (!s || c == '\0' || !(box = (char **)ft_memalloc(sizeof(char *) * \
											((parts = get_count(s, c)) + 1))))
		return (0);
	i = 0;
	while (i < parts)
	{
		while (*s == c)
			s++;
		length = get_length(s, c);
		box[i] = ft_strsub(s, 0, length);
		if (!box[i++])
		{
			deleter(box);
			ft_strdel((char **)&box);
			return (0);
		}
		s += length;
	}
	box[i] = 0;
	return (box);
}
