/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:33:56 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:34:57 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_H
# define LIBFT_TYPES_H

typedef unsigned long long	t_ull;

typedef struct		s_list
{
	void			*content;
	t_ull			content_size;
	struct s_list	*next;
}					t_list;

#endif
