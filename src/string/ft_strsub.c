/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 02:08:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:55:07 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strsub(char const *s, t_ull start, t_ull len)
{
	char	*string;
	t_ull	i;

	if (!s || start + len > ft_strlen(s))
		return (0);
	RETN_IF_NULL((string = ft_strnew(len)));
	i = 0;
	while (i < len)
	{
		*(string + i) = *(s + start + i);
		++i;
	}
	return (string);
}
