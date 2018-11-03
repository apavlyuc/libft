/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 06:07:51 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:59:03 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int		get_del(long long n)
{
	int			del;

	del = 1000000000;
	if (n == 0)
		return (1);
	while ((n / del) == 0)
		del /= 10;
	return (del);
}

char			*ft_itoa(int n)
{
	char		*ret;
	long long	number;
	int			i;
	int			del;

	number = n;
	RETN_IF_NULL((ret = ft_strnew(ft_numlen(number))));
	i = 0;
	if (n < 0)
	{
		*(ret + i++) = '-';
		number = -n;
	}
	del = get_del(number);
	while (del != 0)
	{
		*(ret + i++) = number / del + '0';
		number -= del * (number / del);
		del /= 10;
	}
	*(ret + i) = '\0';
	return (ret);
}
