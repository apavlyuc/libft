/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 19:03:28 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 19:03:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include "../../inc/libft_vector.h"

void		erase(t_vector *vec, t_ull index)
{
	void	*src;
	void	*dst;

	if (!vec || index >= vec->size)
		return;
	dst = (void *)((unsigned char *)vec->data + vec->bytes_in_type * index);
	src = (void *)((unsigned char *)dst + vec->bytes_in_type);
	ft_memcpy(dst, src, (vec->size - index) * vec->bytes_in_type);
	--(vec->size);
}
