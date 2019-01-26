/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:15:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:50:13 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strnew(t_ull size)
{
	char	*href;

	++size;
	href = (char *)ft_memalloc(size * sizeof(char));
	RETN_IF_NULL(href);
	ft_bzero(href, size);
	return (href);
}
