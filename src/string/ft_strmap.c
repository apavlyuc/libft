/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:47:13 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 15:13:09 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char						*ft_strmap(char const *s, char (*f)(char))
{
	char					*string;
	unsigned long long		i;

	if (!s || !f)
		return (0);
	string = ft_strnew(ft_strlen(s));
	if (!string)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(string + i) = f(*(s + i));
		++i;
	}
	*(string + i) = '\0';
	return (string);
}
