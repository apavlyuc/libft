/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:18:21 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:33:41 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list		*ft_lstdelone(t_list **alst, void (*del)(void *, t_ull))
{
	t_list	*ret;

	if (!alst || !(*alst) || !del)
		return (0);
	ret = (*alst)->next;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
	return (ret);
}
