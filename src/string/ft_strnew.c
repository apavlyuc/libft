/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:15:29 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:27:49 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *href;

	href = (char *)malloc(((int)size + 1) * sizeof(char));
	if (href == NULL)
		return (NULL);
	ft_memset(href, '\0', size + 1);
	return (href);
}
