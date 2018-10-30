/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:52:30 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 13:20:20 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../inc/libft.h"

char		*ft_strrev(char *s)
{
	char	*rev;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	rev = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (i != -1)
	{
		*rev++ = *(s + i);
		i--;
	}
	*rev = '\0';
	return (rev - ft_strlen(s));
}
