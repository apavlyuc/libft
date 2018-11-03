/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linecount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 22:16:00 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/11/03 17:09:15 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long		ft_linecount(char *str)
{
	unsigned long long	count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			++count;
		++str;
	}
	return (count);
}
