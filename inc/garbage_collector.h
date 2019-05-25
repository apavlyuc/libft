/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:33:46 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:34:49 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

struct	s_garbage {
	void				*ptr;
	struct s_garbage	*next;
};

struct	s_collector {
	struct s_garbage	*garbage;
	int					is_active;
};

void	add_to_storage(void *ptr);
int		remove_from_storage(void *ptr);
void	set_active(int status);
void	clear_garbage_collector();

/*
**			controller.c
*/
void	turn_on_garbage_collector();
void	turn_off_garbage_collector();
#endif
