/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:22:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:14:10 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*ref;
	t_ull	i;

	if (c == 0)
		return (char *)(s + ft_strlen(s));
	i = 0;
	ref = (char *)s;
	while (*(ref + i))
	{
		if (*(ref + i) == c)
			return (ref + i);
		++i;
	}
	return (0);
}
