/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:06:21 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:13:28 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		ft_lstadd_last(t_list **dst, t_list *new)
{
	t_list	**tmp;

	if (!dst || !new)
		return ;
	if (!(*dst))
	{
		*dst = new;
		return ;
	}
	tmp = dst;
	while ((*tmp)->next)
		*tmp = (*tmp)->next;
	(*tmp)->next = new;
}
