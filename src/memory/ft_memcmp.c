/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:46:26 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 20:05:43 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_memcmp(const void *s1, const void *s2, unsigned long long n)
{
	unsigned long long	i;
	unsigned char		*ref1;
	unsigned char		*ref2;

	i = 0;
	ref1 = (unsigned char *)s1;
	ref2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(ref1 + i) != *(ref2 + i))
			return (*(ref1 + i) - *(ref2 + i));
		++i;
	}
	return (0);
}
