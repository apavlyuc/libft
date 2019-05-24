void	set_active(int status);

void				turn_on_garbage_collector()
{
	set_active(1);
}

void				turn_off_garbage_collector()
{
	set_active(0);
}
