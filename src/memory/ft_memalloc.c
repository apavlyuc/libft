/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:55:39 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:34:21 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

void		*ft_memalloc(t_ull size)
{
	void	*mem;

	mem = malloc(size);
	if (mem != 0)
		ft_bzero(mem, size);
	return ((void *)mem);
}
