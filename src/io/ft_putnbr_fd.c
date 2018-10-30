/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 07:15:37 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 19:51:49 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	*num;

	RET_IF_NULL((num = ft_itoa(n)));
	ft_putstr(num);
	ft_memdel((void **)&num);
}
