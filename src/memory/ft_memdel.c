/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:11:00 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:36:14 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/garbage_collector.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		remove_from_storage(*ap);
		free(*ap);
		*ap = 0;
	}
}
