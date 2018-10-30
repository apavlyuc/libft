/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 21:39:22 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 15:00:15 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long		ft_factorial(int n)
{
	unsigned long long	ret;

	ret = 1;
	if (n <= 1)
		return (ret);
	while (n != 0)
		ret *= n--;
	return (0);
}
