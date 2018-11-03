/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:38:30 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:35:32 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, t_ull n)
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
		if (*(ref1 + i) == (unsigned char)c)
			return (ref1 + ++i);
		++i;
	}
	return (0);
}
