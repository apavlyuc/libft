/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:47:20 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:46:25 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strncat(char *s1, const char *s2, t_ull n)
{
	t_ull	s1_length;
	t_ull	i;

	s1_length = ft_strlen(s1);
	i = 0;
	while (*(s2 + i) && i < n)
	{
		*(s1 + s1_length + i) = *(s2 + i);
		++i;
	}
	*(s1 + s1_length + i) = '\0';
	return (s1);
}
