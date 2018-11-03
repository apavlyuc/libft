/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:50:44 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:36:05 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memcpy(void *dst, const void *src, t_ull n)
{
	t_ull			i;
	unsigned char	*ref1;
	unsigned char	*ref2;

	i = 0;
	ref1 = (unsigned char *)dst;
	ref2 = (unsigned char *)src;
	while (i < n)
	{
		*(ref1 + i) = *(ref2 + i);
		++i;
	}
	return (dst);
}
