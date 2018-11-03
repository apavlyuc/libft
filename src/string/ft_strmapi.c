/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:55:02 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:12:06 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strmapi(char const *s, char (*f)(t_ull, char))
{
	char	*string;
	t_ull	i;

	if (!s || !f)
		return (0);
	string = ft_strnew(ft_strlen(s));
	if (!string)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(string + i) = f(i, *(s + i));
		++i;
	}
	*(string + i) = '\0';
	return (string);
}
