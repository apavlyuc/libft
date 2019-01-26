/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 02:35:48 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:47:02 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	t_ull	s1_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	RETN_IF_NULL((string = ft_strnew(s1_len + ft_strlen(s2))));
	ft_strcpy(string, s1);
	ft_strcpy(string + s1_len, s2);
	return (string);
}
