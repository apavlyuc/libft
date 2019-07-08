/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vector.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:35:20 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 11:35:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VECTOR_H
# define LIBFT_VECTOR_H

# include "libft_types.h"

typedef struct	s_vector
{
	void		*data;
	t_ull		size;
	t_ull		capacity;
	t_ull		bytes_in_type;
}				t_vector;

t_vector		*new_vector(void *data, t_ull capacity, t_ull size, t_ull bytes_in_type);

t_ull			size(t_vector *vec);
t_ull			capacity(t_vector *vec);
void			set_capacity(t_vector *vec, t_ull capacity);
void			shrink_to_fit(t_vector *vec);

void			insert(t_vector *vec, void *element, t_ull index);
void			push_back(t_vector *vec, void *element);

void			erase(t_vector *vec, t_ull index);

void			*at(t_vector *vec, t_ull index);
char			char_at(t_vector *vec, t_ull index);
int				int_at(t_vector *vec, t_ull index);
double			double_at(t_vector *vec, t_ull index);

#endif
