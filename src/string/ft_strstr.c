/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:43:41 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:28:07 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;
	int		i;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = -1;
	haystack = ft_strchr(haystack, *needle);
	if (!haystack)
		return (NULL);
	while (*(haystack + ++i))
		if (!ft_memcmp(haystack + i, needle, needle_len))
			return ((char *)(haystack + i));
	return (NULL);
}
