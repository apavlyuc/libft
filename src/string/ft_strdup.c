/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:15:17 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:46:33 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;

	RETN_IF_NULL((s2 = ft_strnew(ft_strlen(s1))));
	ft_strcpy(s2, s1);
	return (s2);
}
