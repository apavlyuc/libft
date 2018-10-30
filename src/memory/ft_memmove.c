/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:13:27 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 20:07:43 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memmove(void *dst, const void *src, unsigned long long len)
{
	unsigned char	*ref1;
	unsigned char	*ref2;

	ref1 = (unsigned char *)dst;
	ref2 = (unsigned char *)src;
	if ((unsigned long int)dst < (unsigned long int)src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			*(ref1 + len) = *(ref2 + len);
	return (dst);
}
