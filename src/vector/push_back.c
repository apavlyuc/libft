/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:09 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 17:17:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft_vector.h"
#include "../inc/libft.h"

static void		with_realloc(t_vector *vec, void *element)
{
	void		*tmp_data;
	t_ull		to_cpy;

	vec->capacity = vec->capacity * 1.75;
	tmp_data = vec->data;
	vec->data = ft_memalloc(vec->bytes_in_type * vec->capacity);
	to_cpy = vec->size * vec->bytes_in_type;
	ft_memcpy(vec->data, tmp_data, to_cpy);
	ft_memcpy((void *)((unsigned char *)vec->data + to_cpy), element, vec->bytes_in_type);
	ft_memdel(&tmp_data);
}

static void		without_realloc(t_vector *vec, void *element)
{
	void		*dst;

	dst = (void *)((unsigned char *)vec->data + vec->size * vec->bytes_in_type);
	ft_memcpy(dst, element, vec->bytes_in_type);
}

void			push_back(t_vector *vec, void *element)
{
	if (!vec)
		return;
	if (vec->size == vec->capacity)
		with_realloc(vec, element);
	else
		without_realloc(vec, element);
	++(vec->size);
}
