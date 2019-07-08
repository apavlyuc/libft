/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:03:26 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 13:03:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/libft_vector.h"

t_vector		*new_vector(void *data, t_ull capacity, t_ull size, t_ull bytes_in_type)
{
	t_vector	*ret;

	ret = (t_vector *)ft_memalloc(sizeof(t_vector));
	RETN_IF_NULL(ret);
	ret->data = ft_memalloc(ft_max_unsigned(capacity, size) * bytes_in_type);
	ret->capacity = capacity;
	ret->size = size;
	ret->bytes_in_type = bytes_in_type;
	ft_memcpy(ret->data, data, size * bytes_in_type);
	return (ret);
}
