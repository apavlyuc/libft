#include "../../../inc/ft_malloc.h"

t_zone		*get_new_zone(t_ull size)
{
	t_zone	*ret;

	if (size <= 32 * KB)
		size = get_allocation_size(size);
	else
		size += sizeof(t_block);
	RETN_IF_NULL((ret = (t_zone *)allocate_memory(size)));
	// init zone at this point
	return (ret);
}

t_ull		get_allocation_size(t_ull needed_size)
{
	return (needed_size);
}

void		*allocate_memory(t_ull size)
{
	(void)size;
	return (0);
}