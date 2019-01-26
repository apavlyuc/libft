/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:43:41 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:52:53 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char					*ft_strstr(const char *haystack, const char *needle)
{
	t_ull	needle_len;
	t_ull	haystack_len;
	t_ull	i;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (needle_len == 0 || haystack_len == 0)
		return ((char *)haystack);
	haystack = ft_strchr(haystack, *needle);
	if (!haystack)
		return (0);
	i = 0;
	while (*(haystack + i) && (i + needle_len) <= haystack_len)
	{
		if (!ft_memcmp(haystack + i, needle, needle_len))
			return ((char *)(haystack + i));
		++i;
	}
	return (0);
}
