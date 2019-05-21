/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 00:55:39 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:56:47 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

void		*ft_memalloc(t_ull size)
{
	void	*mem;

	RETN_IF_NULL((mem = malloc(size)));
	ft_bzero(mem, size);
	add_to_storage(mem);
	return (mem);
}
