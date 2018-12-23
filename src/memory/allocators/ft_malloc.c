#include "../../../inc/ft_malloc.h"

static void		init_zone(t_zone **zone, t_ull size)
{
	*zone = (t_zone *)g_start_addr;
	if (*zone == 0)
	{
		RET_IF_NULL((*zone = get_new_zone(size)));
		g_start_addr = *zone;
		// init block at this point
	}
}

void			*ft_malloc(t_ull size)
{
	t_zone		*zone;
	t_block		*block;

	init_zone(&zone, size);
	RETN_IF_NULL(zone);
	(void)block;
	return (0);
}