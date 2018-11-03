/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:34:49 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:33:41 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list		*ft_lstnew(void const *content, t_ull content_size)
{
	t_list	*list;

	RETN_IF_NULL((list = ft_memalloc(sizeof(*list))));
	if (content == 0)
	{
		list->content = 0;
		list->content_size = 0;
	}
	else
	{
		list->content = ft_memalloc(content_size);
		if (list->content == 0)
		{
			ft_memdel((void **)&list);
			return (0);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = 0;
	return (list);
}
