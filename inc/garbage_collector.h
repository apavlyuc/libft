#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

struct	s_garbage {
	void				*ptr;
	struct s_garbage	*next;
};

struct s_collector {
	struct s_garbage	*garbage;
	int					is_active;
};

void	add_to_storage(void *ptr);
void	remove_from_storage(void *ptr);
void	turn_on_garbage_collector();
void	turn_off_garbage_collector();
void	clear_garbage_collector();
#endif