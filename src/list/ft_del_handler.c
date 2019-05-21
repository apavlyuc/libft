#include "../../inc/libft.h"
#include <stdlib.h>

void		ft_del_handler(void *content, t_ull content_size)
{
	ft_memdel(&content);
	(void)content_size;
}