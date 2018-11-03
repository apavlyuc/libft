/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 23:39:59 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 13:39:41 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

static int	newstr_length(char *str, char *old, char *new)
{
	return (ft_strlen(str) + (-ft_strlen(old) +
							ft_strlen(new)) * ft_partscount(str, old));
}

char		*ft_replace(char *str, char *old, char *new)
{
	char	*newstr;
	int		i;
	int		length;
	char	*p;

	if (!str || !old || !new || !*str || !*old)
		return (NULL);
	if (!(newstr = (char *)malloc(sizeof(char) *
						(length = newstr_length(str, old, new)) + 1)))
		return (NULL);
	*(newstr + length) = '\0';
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
