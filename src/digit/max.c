/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:31:23 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 18:31:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft_types.h"

long long	ft_max_signed(long long a, long long b)
{
	if (a < b)
		return (b);
	return (a);
}

t_ull		ft_max_unsigned(t_ull a, t_ull b)
{
	if (a < b)
		return (b);
	return (a);
}
