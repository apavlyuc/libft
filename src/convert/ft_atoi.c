/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:10:09 by apavlyuc          #+#    #+#             */
/*   Updated: 2018/10/30 17:03:31 by apavlyuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	get_number(const char *str)
{
	int		ret;
	char	sign;

	ret = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str <= '9' && *str >= '0')
	{
		ret = ret * 10 + (*str - 48);
		++str;
	}
	return (ret * sign);
}

int			ft_atoi(const char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return (get_number(str));
}
