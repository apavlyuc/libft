/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 20:07:49 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:47:07 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_ull		ft_strlcat(char *dst, const char *src, t_ull size)
{
	t_ull	dst_length;
	t_ull	src_length;
	t_ull	i;
	t_ull	n;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if ((n = size - dst_length) <= 0)
		return (src_length + size);
	dst += dst_length;
	i = 0;
	while (*(src + i) && (n-- > 1))
	{
		*(dst + i) = *(src + i);
		++i;
	}
	*(dst + i) = '\0';
	return (dst_length + src_length);
}
