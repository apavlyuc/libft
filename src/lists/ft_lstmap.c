/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:58:11 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:26:00 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../inc/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*temp;

	if (!f || !lst)
		return (NULL);
	list = f(lst);
	temp = list;
	while (lst->next)
	{
		temp->next = f(lst->next);
		if (!temp->next)
		{
			free(temp->next);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (list);
}
