/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:47:13 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:48:47 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char						*ft_strmap(char const *s, char (*f)(char))
{
	char		*string;
	t_ull		i;

	if (!s || !f)
		return (0);
	RETN_IF_NULL((string = ft_strnew(ft_strlen(s))));
	i = 0;
	while (*(s + i))
	{
		*(string + i) = f(*(s + i));
		++i;
	}
	return (string);
}
