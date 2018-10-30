/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:35:39 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:27:57 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ref;

	ref = (char *)s;
	i = ft_strlen(s) + 1;
	while (--i != -1)
		if (*(ref + i) == c)
			return (ref + i);
	return (NULL);
}
