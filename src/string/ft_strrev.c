/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:52:30 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 15:52:09 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char					*ft_strrev(char *s)
{
	char				*rev;
	unsigned long long	i;
	unsigned long long	j;

	if (!s)
		return (0);
	i = ft_strlen(s);
	rev = ft_strnew(i);
	if (!rev)
		return (0);
	j = 0;
	while (i != 0)
	{
		*(rev + j) = *(s + i - 1);
		j++;
		i--;
	}
	*(rev + j) = '\0';
	return (rev);
}
