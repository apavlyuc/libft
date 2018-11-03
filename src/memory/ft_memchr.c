/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:35:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:35:27 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memchr(const void *s, int c, t_ull n)
{
	t_ull			i;
	unsigned char	*ref;

	i = 0;
	ref = (unsigned char *)s;
	while (i < n)
	{
		if (*(ref + i) == (unsigned char)c)
			return ((void *)(ref + i));
		++i;
	}
	return (0);
}
