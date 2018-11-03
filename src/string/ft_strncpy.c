/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:08:23 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:02:24 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strncpy(char *dst, const char *src, t_ull len)
{
	t_ull	i;

	i = 0;
	while (i < len && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		++i;
	}
	ft_bzero((void *)(dst + i), len - i);
	return (dst);
}
