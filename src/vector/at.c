/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:32:26 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 17:32:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft_vector.h"
#include "../inc/libft.h"

void		*at(t_vector *vec, t_ull index)
{
	if (!vec || vec->size <= index)
		return (0);
	return ((void *)((unsigned char *)vec->data + index * vec->bytes_in_type));
}

char		char_at(t_vector *vec, t_ull index)
{
	void	*tmp;

	tmp = at(vec, index);
	return (*((char *)tmp));
}

int			int_at(t_vector *vec, t_ull index)
{
	void	*tmp;

	tmp = at(vec, index);
	return (*((int *)tmp));
}

double		double_at(t_vector *vec, t_ull index)
{
	void	*tmp;

	tmp = at(vec, index);
	return (*((double *)tmp));
}
