/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:02:20 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 13:20:20 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	needle_len;
	int		len;
	int		i;

	needle_len = ft_strlen(n);
	if (needle_len == 0)
		return ((char *)h);
	len = (int)(l - needle_len);
	i = -1;
	while (*(h + ++i) && len-- >= 0)
		if (!ft_memcmp(h + i, n, needle_len))
			return ((char *)(h + i));
	return (NULL);
}
