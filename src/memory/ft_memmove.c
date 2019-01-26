/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:13:27 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:36:21 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memmove(void *dst, const void *src, t_ull len)
{
	unsigned char	*ref1;
	unsigned char	*ref2;

	ref1 = (unsigned char *)dst;
	ref2 = (unsigned char *)src;
	if ((t_ull)dst < (t_ull)src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			*(ref1 + len) = *(ref2 + len);
	return (dst);
}
