/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:40:57 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 18:42:22 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 -
					*(unsigned char *)s2);
		}
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
