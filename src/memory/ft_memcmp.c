/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:46:26 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:35:56 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int					ft_memcmp(const void *s1, const void *s2, t_ull n)
{
	t_ull			i;
	unsigned char	*ref1;
	unsigned char	*ref2;

	i = 0;
	ref1 = (unsigned char *)s1;
	ref2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(ref1 + i) != *(ref2 + i))
			return (*(ref1 + i) - *(ref2 + i));
		++i;
	}
	return (0);
}
