/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 02:45:07 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 16:56:36 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strtrim(char const *s)
{
	t_ull	i;
	t_ull	j;

	if (!s)
		return (0);
	i = 0;
	while (ft_isspace(*(s + i)))
		++i;
	j = ft_strlen(s) - 1;
	while (ft_isspace(*(s + j)))
		--j;
	if (j >= i)
		return (ft_strsub(s, i, j - i + 1));
	return (0);
}
