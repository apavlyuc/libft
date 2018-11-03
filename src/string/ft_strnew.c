/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:15:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:50:13 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

char		*ft_strnew(unsigned long long size)
{
	char	*href;

	++size;
	RETN_IF_NULL((href = (char *)malloc(size * sizeof(char))));
	ft_bzero(href, size);
	return (href);
}
