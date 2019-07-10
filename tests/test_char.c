/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:47:31 by marvin            #+#    #+#             */
/*   Updated: 2019/07/10 12:47:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

static int		check(int f_input, int expected_f_ret, int (*f)(int), int test_id)
{
	if (expected_f_ret != f(f_input))
	{
		printf("\033[0;31m");
		printf("\n\t\tTest [%d] failed\n", test_id);
		printf("\033[0m");
		return (0);
	}
	return (1);
}

static void		test_ft_isalnum()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], 0, ft_isalnum, ++i);
	final_res &= check(data[1], 1, ft_isalnum, ++i);
	final_res &= check(data[2], 1, ft_isalnum, ++i);
	final_res &= check(data[3], 0, ft_isalnum, ++i);
	final_res &= check(data[4], 0, ft_isalnum, ++i);
	final_res &= check(data[5], 0, ft_isalnum, ++i);
	final_res &= check(data[6], 1, ft_isalnum, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_isalpha()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], 0, ft_isalpha, ++i);
	final_res &= check(data[1], 1, ft_isalpha, ++i);
	final_res &= check(data[2], 0, ft_isalpha, ++i);
	final_res &= check(data[3], 0, ft_isalpha, ++i);
	final_res &= check(data[4], 0, ft_isalpha, ++i);
	final_res &= check(data[5], 0, ft_isalpha, ++i);
	final_res &= check(data[6], 1, ft_isalpha, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_isascii()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], 1, ft_isascii, ++i);
	final_res &= check(data[1], 1, ft_isascii, ++i);
	final_res &= check(data[2], 1, ft_isascii, ++i);
	final_res &= check(data[3], 0, ft_isascii, ++i);
	final_res &= check(data[4], 0, ft_isascii, ++i);
	final_res &= check(data[5], 1, ft_isascii, ++i);
	final_res &= check(data[6], 1, ft_isascii, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_isdigit()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], 0, ft_isdigit, ++i);
	final_res &= check(data[1], 0, ft_isdigit, ++i);
	final_res &= check(data[2], 1, ft_isdigit, ++i);
	final_res &= check(data[3], 0, ft_isdigit, ++i);
	final_res &= check(data[4], 0, ft_isdigit, ++i);
	final_res &= check(data[5], 0, ft_isdigit, ++i);
	final_res &= check(data[6], 0, ft_isdigit, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_isprint()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], 0, ft_isprint, ++i);
	final_res &= check(data[1], 1, ft_isprint, ++i);
	final_res &= check(data[2], 1, ft_isprint, ++i);
	final_res &= check(data[3], 0, ft_isprint, ++i);
	final_res &= check(data[4], 0, ft_isprint, ++i);
	final_res &= check(data[5], 1, ft_isprint, ++i);
	final_res &= check(data[6], 1, ft_isprint, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_isspace()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[1], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[2], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[3], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[4], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[5], isspace(data[0]), ft_isspace, ++i);
	final_res &= check(data[6], isspace(data[0]), ft_isspace, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_tolower()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], data[0], ft_tolower, ++i);
	final_res &= check(data[1], data[1], ft_tolower, ++i);
	final_res &= check(data[2], data[2], ft_tolower, ++i);
	final_res &= check(data[3], data[3], ft_tolower, ++i);
	final_res &= check(data[4], data[4], ft_tolower, ++i);
	final_res &= check(data[5], data[5], ft_tolower, ++i);
	final_res &= check(data[6], 'q', ft_tolower, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

static void		test_ft_toupper()
{
	const int	data[] = {1, 'q', '2', -10, 123123123, '!', 'Q'};
	int			final_res = 1;
	int			i = 0;

	printf("\t%s", __func__);
	final_res &= check(data[0], data[0], ft_toupper, ++i);
	final_res &= check(data[1], 'Q', ft_toupper, ++i);
	final_res &= check(data[2], data[2], ft_toupper, ++i);
	final_res &= check(data[3], data[3], ft_toupper, ++i);
	final_res &= check(data[4], data[4], ft_toupper, ++i);
	final_res &= check(data[5], data[5], ft_toupper, ++i);
	final_res &= check(data[6], data[6], ft_toupper, ++i);
	if (final_res)
	{
		printf("\033[0;32m");
		printf("\t[OK]\n");
		printf("\033[0m");
	}
}

void	run_test_for_char_folder()
{
	printf("in: %s\n", __func__);
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_isspace();
	test_ft_tolower();
	test_ft_toupper();
}
