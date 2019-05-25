/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:25:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2019/05/25 16:27:43 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

void		ft_del_handler(void *content, t_ull content_size)
{
	ft_memdel(&content);
	(void)content_size;
}
