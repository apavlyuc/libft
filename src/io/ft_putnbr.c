/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 07:06:17 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 19:50:05 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		ft_putnbr(int n)
{
	char	*num;

	RET_IF_NULL((num = ft_itoa(n)));
	ft_putstr(num);
	ft_memdel((void **)&num);
}
