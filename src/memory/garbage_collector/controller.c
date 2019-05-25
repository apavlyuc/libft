/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:30:10 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:43:47 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/garbage_collector.h"

void	turn_on_garbage_collector(void)
{
	set_active(1);
}

void	turn_off_garbage_collector(void)
{
	set_active(0);
}
