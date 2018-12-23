#ifndef FT_MALLOC_H
# define FT_MALLOC_H

#include "libft_types.h"
#include "libft_defines.h"

# ifndef KB
#  define KB 1024
# endif

typedef struct	s_block
{
	t_ull		size;
    void		*ptr_data;
	char		is_free;
}				t_block;

typedef struct	s_zone
{
	t_ull		size;
	char		type;
}				t_zone;

void			*g_start_addr;

/*
**				ft_malloc.c
*/
void			*ft_malloc(t_ull size);

/*
**				zone_processing.c
*/
t_zone			*get_new_zone(t_ull size);
t_ull			get_allocation_size(t_ull needed_size);
void			*allocate_memory(t_ull size);
#endif