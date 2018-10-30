/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:47:20 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:27:34 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int s1_length;
	int i;

	s1_length = ft_strlen(s1);
	i = -1;
	while (*(s2 + ++i) != '\0' && i < (int)n)
		*(s1 + s1_length + i) = *(s2 + i);
	*(s1 + s1_length + i) = '\0';
	return (s1);
}
