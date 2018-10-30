/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:22:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:26:46 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*ref;
	int		i;

	i = -1;
	ref = (char *)s;
	while (*(ref + ++i) != '\0' || c == 0)
		if (*(ref + i) == c)
			return (ref + i);
	return (NULL);
}
