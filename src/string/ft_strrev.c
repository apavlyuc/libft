/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:52:30 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:52:14 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strrev(char *s)
{
	char	*rev;
	t_ull	i;
	t_ull	j;

	RETN_IF_NULL(s);
	i = ft_strlen(s);
	RETN_IF_NULL((rev = ft_strnew(i)));
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
