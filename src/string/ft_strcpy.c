/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:02:58 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:35:39 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char					*ft_strcpy(char *dst, const char *src)
{
	return (ft_strncpy(dst, src, ft_strlen(src)));
}
