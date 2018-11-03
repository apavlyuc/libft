/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:15:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 15:33:14 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

char		*ft_strnew(unsigned long long size)
{
	char	*href;

	href = (char *)malloc((size + 1) * sizeof(char));
	if (href == 0)
		return (0);
	ft_memset(href, '\0', size + 1);
	return (href);
}
