/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 20:07:49 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 13:20:20 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int dst_length;
	int src_length;
	int i;
	int n;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = -1;
	dst += dst_length;
	if ((n = (int)size - dst_length) <= 0)
		return (src_length + size);
	while ((*(src + ++i) != '\0') && (n-- > 1))
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (dst_length + src_length);
}
