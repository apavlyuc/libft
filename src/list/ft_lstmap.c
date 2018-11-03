/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:58:11 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:12:19 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*temp;

	if (!f || !lst)
		return (0);
	list = f(lst);
	temp = list;
	while (lst->next)
	{
		temp->next = f(lst->next);
		if (!temp->next)
		{
			ft_memdel((void **)&(temp->next));
			return (0);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (list);
}
