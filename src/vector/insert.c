/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:33:36 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 13:33:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft_vector.h"
#include "../inc/libft.h"

static int		size_check(t_vector *vec, void *element, t_ull index)
{
	if (!vec)
		return (0);
	if (index > vec->size)
		return (0);
	if (index == vec->size)
	{
		push_back(vec, element);
		return (0);
	}
	return (1);
}

static void		without_realloc(t_vector *vec, void *element, t_ull index)
{
	t_ull		to_mv;
	t_ull		i;

	to_mv = (vec->size - index + 1) * vec->bytes_in_type;
	i = vec->size * vec->bytes_in_type;
	while (to_mv)
	{
		*((unsigned char *)vec->data + i + vec->bytes_in_type) = *((unsigned char *)vec->data + i);
		--i;
		--to_mv;
	}
	ft_memcpy((void *)((unsigned char *)vec->data + index * vec->bytes_in_type), element, vec->bytes_in_type);
}

static void		with_realloc(t_vector *vec, void *element, t_ull index)
{
	void		*tmp_data;
	void		*dst;
	void		*src;

	tmp_data = vec->data;
	vec->capacity = vec->capacity * 1.75;
	vec->data = ft_memalloc(vec->bytes_in_type * vec->capacity);
	ft_memcpy(vec->data, tmp_data, vec->bytes_in_type * index);
	dst = (void *)((unsigned char *)vec->data + vec->bytes_in_type * index);
	ft_memcpy(dst, element, vec->bytes_in_type);
	dst = (void *)((unsigned char *)dst + vec->bytes_in_type);
	src = (void *)((unsigned char *)tmp_data + vec->bytes_in_type * index);
	ft_memcpy(dst, src, (vec->size - index) * vec->bytes_in_type);
}

void			insert(t_vector *vec, void *element, t_ull index)
{
	RET_IF_NULL(size_check(vec, element, index));
	if (vec->capacity > vec->size)
		without_realloc(vec, element, index);
	else
		with_realloc(vec, element, index);
	++(vec->size);
}
