/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 02:08:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 13:20:20 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../inc/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*string;
	int		i;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	i = -1;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (++i < (int)len)
		*(string + i) = *(s + start + i);
	*(string + i) = '\0';
	return (string);
}
