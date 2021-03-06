/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 06:58:01 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 18:46:31 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../inc/libft.h"

void	ft_putstr(char	const *s)
{
	int	ret;
	if (s)
		ret = write(1, s, ft_strlen(s));
	(void)ret;
}
