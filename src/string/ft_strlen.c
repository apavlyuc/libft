/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:09:27 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 15:07:38 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long		ft_strlen(const char *s)
{
	unsigned long long	len;

	len = 0;
	if (!s)
		return (len);
	while (*(s + len))
		++len;
	return (len);
}
