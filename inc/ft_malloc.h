#ifndef FT_MALLOC_H
# define FT_MALLOC_H

typedef struct	s_block
{
    void		*l;
}				t_block;

void			*ft_malloc(unsigned long long size);

#endif