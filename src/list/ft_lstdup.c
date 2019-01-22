/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/1/22 12:18:50 by apavlyuc           #+#    #+#             */
/*   Updated: 2019/1/22 13:13:14 by apavlyuc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list				*ft_lstdup(t_list *lst)
{
	return (ft_lstnew(lst->content, lst->content_size));
}