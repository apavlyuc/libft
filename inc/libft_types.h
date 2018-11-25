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