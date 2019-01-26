/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:35:39 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 15:37:59 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	t_ull	i;
	char	*ref;

	ref = (char *)s;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (*(ref + i) == c)
			return (ref + i);
		--i;
	}
	return (0);
}
