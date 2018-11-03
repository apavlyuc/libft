/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:40:06 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:37:28 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ft_memset(void *b, int c, t_ull len)
{
	unsigned char	*ref;

	ref = (unsigned char *)b;
	while (len != 0)
	{
		*ref = (unsigned char)c;
		++ref;
		--len;
	}
	return (b);
}
