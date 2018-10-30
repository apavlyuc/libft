/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:18:21 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 19:51:02 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list		*ft_lstdelone(t_list **alst, void (*del)(void *, unsigned long long))
{
	t_list	*ret;

	if (alst == NULL || *alst == NULL || del == NULL)
		return (NULL);
	ret = (*alst)->next;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
	return (ret);
}
