/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partscount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 21:55:40 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:09:41 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_ull		ft_partscount(char *str, char *part)
{
	t_ull	count;

	count = 0;
	if (!str || !part)
		return (count);
	while ((str = ft_strstr(str, part)))
	{
		++count;
		str += ft_strlen(part);
	}
	return (count);
}
