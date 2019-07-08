/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_capacity.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:24:14 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 13:24:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/libft_vector.h"

void			set_capacity(t_vector *vec, t_ull capacity)
{
	void		*tmp;
	t_ull		to_cpy;

	if (!vec || vec->capacity == capacity)
		return;
	to_cpy = (vec->size < capacity ? vec->size : capacity);
	tmp = vec->data;
	vec->capacity = capacity;
	vec->size = to_cpy;
	vec->data = ft_memalloc(capacity * vec->bytes_in_type);
	if (tmp && vec->data)
		ft_memcpy(vec->data, tmp, to_cpy * vec->bytes_in_type);
	ft_memdel(&tmp);
}
