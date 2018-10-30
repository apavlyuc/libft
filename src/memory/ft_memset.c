/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:40:06 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 19:55:24 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				*ft_memset(void *b, int c, unsigned long long len)
{
	unsigned char	*ref;

	ref = (unsigned char *)b;
	while (len != 0)
	{
		*ref = (unsigned char)c;
		++ref;
		--len;
	}
	return (b);
}
