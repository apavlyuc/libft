/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:35:53 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 20:04:42 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void					*ft_memchr(const void *s, int c, unsigned long long n)
{
	unsigned long long	i;
	unsigned char		*ref;

	i = 0;
	ref = (unsigned char *)s;
	while (i < n)
	{
		if (*(ref + i) == (unsigned char)c)
			return ((void *)(ref + i));
		++i;
	}
	return (0);
}
