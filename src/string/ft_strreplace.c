/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 23:39:59 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:45:38 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static t_ull	newstr_length(char *str, char *old, char *new)
{
	return (ft_strlen(str) + (-ft_strlen(old) +
							ft_strlen(new)) * ft_partscount(str, old));
}

char			*ft_strreplace(char *str, char *old, char *new)
{
	char		*newstr;
	int			i;
	t_ull		length;
	char		*p;

	if (!str || !old || !new || !*str || !*old)
		return (0);
	length = newstr_length(str, old, new);
	RETN_IF_NULL((newstr = ft_strnew(length)));
	p = newstr;
	while (length--)
	{
		i = -1;
		if (str == ft_strstr(str, old))
		{
			while (*(new + ++i))
				*newstr++ = *(new + i);
			str = ft_strstr(str, old) + ft_strlen(old);
		}
		else
			*newstr++ = *str++;
	}
	return (p);
}
