/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:14:03 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:04 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_baseunit(unsigned int n)
{
	int	baseunit;

	baseunit = 0;
	while (n > 0)
	{
		n = n / 10;
		baseunit++;
	}
	return (baseunit);
}

static void	make_ans(unsigned int nbr, char arr[])
{
	unsigned char	num_arr[34];
	int				num_idx;
	int				idx;

	idx = -1;
	if (arr[0] == '-')
		num_arr[33] = 1;
	num_idx = 0;
	while (nbr > 0)
	{
		num_arr[num_idx++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	arr[num_idx] = 0;
	while (++idx < num_idx)
		arr[idx] = num_arr[num_idx - idx - 1];
	if (num_arr[33] == 1)
	{
		while (idx)
		{
			arr[idx] = arr[idx - 1];
			idx--;
		}
		arr[0] = '-';
	}
}

static void	set_arr(char *arr, size_t minus_flag, int n)
{
	if (minus_flag)
		arr[0] = '-';
	if (n == 0)
		arr[0] = '0';
	else
		make_ans(n, arr);
}

char	*ft_itoa(int n)
{
	size_t	minus_flag;
	size_t	baseunit_n;
	char	*arr;

	if (n < 0)
	{
		minus_flag = 1;
		n = ~n + 1;
		baseunit_n = check_baseunit((unsigned int)n) + 2;
	}
	else if (n == 0)
		baseunit_n = 2;
	else
	{
		baseunit_n = check_baseunit(n) + 1;
		minus_flag = 0;
	}
	arr = (char *)ft_calloc(1, baseunit_n);
	if (!arr)
		return (0);
	set_arr(arr, minus_flag, n);
	return (arr);
}
