/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:02:20 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:10:34 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strnstr(const char *h, const char *n, t_ull l)
{
	t_ull	needle_len;
	t_ull	len;
	t_ull	i;

	needle_len = ft_strlen(n);
	if (needle_len == 0)
		return ((char *)h);
	len = l - needle_len;
	i = 0;
	while (*(h + i) && i < len)
	{
		if (!ft_memcmp(h + i, n, needle_len))
			return ((char *)(h + i));
		++i;
	}
	return (0);
}
