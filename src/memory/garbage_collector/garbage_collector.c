/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:30:14 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:33:16 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/garbage_collector.h"
#include <stdlib.h>

typedef struct s_collector	t_collector;
typedef struct s_garbage	t_garbage;

static t_collector	*get_collector(void)
{
	static t_collector collector = {0, 1};

	return (&collector);
}

void				set_active(int status)
{
	t_collector			*collector;

	if (status != 1 && status != 0)
		return ;
	collector = get_collector();
	collector->is_active = status;
}

void				add_to_storage(void *ptr)
{
	t_collector		*collector;
	t_garbage		*temp;

	if (!ptr)
		return ;
	collector = get_collector();
	if (collector->is_active == 0)
		return ;
	if (!collector->garbage)
	{
		collector->garbage = (t_garbage *)malloc(sizeof(t_garbage));
		collector->garbage->ptr = ptr;
		collector->garbage->next = 0;
	}
	else
	{
		temp = collector->garbage;
		while (temp->next)
			temp = temp->next;
		temp->next = (t_garbage *)malloc(sizeof(t_garbage));
		temp->next->ptr = ptr;
		temp->next->next = 0;
	}
}

void				clear_garbage_collector(void)
{
	t_collector		*collector;
	t_garbage		*temp;

	collector = get_collector();
	if (!collector->is_active)
		return ;
	temp = collector->garbage;
	while (temp)
	{
		if (temp->ptr)
		{
			free(temp->ptr);
			temp->ptr = 0;
		}
		temp = temp->next;
	}
	while (collector->garbage)
	{
		temp = collector->garbage->next;
		free(collector->garbage);
		collector->garbage = temp;
	}
}

int					remove_from_storage(void *ptr)
{
	t_collector		*collector;
	t_garbage		*curr;
	t_garbage		*prev;

	if (!ptr)
		return (0);
	collector = get_collector();
	curr = collector->garbage;
	prev = 0;
	while (curr)
	{
		if (curr->ptr == ptr)
		{
			if (prev)
				prev->next = curr->next;
			else
				collector->garbage = curr->next;
			free(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
	}
	return (0);
}
