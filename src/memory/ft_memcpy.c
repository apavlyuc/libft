/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:50:44 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 20:06:36 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void					*ft_memcpy(void *dst, const void *src, unsigned long long n)
{
	unsigned long long	i;
	unsigned char		*ref1;
	unsigned char		*ref2;

	i = 0;
	ref1 = (unsigned char *)dst;
	ref2 = (unsigned char *)src;
	while (i < n)
	{
		*(ref1 + i) = *(ref2 + i);
		++i;
	}
	return (dst);
}
