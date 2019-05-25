/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:11:00 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 14:11:50 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/garbage_collector.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		if (remove_from_storage(*ap) == 1)
			free(*ap);
		*ap = 0;
	}
}
