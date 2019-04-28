#include "../../inc/libft_types.h"
#include <stdlib.h>

void		ft_del_handler(void *content, t_ull content_size)
{
	free(content);
	(void)content_size;
}