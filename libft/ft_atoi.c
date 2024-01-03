/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:52:04 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:21:58 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_space(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

static char	*check_sign(char *str, int *minus, int *sign)
{
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*minus = *minus * -1;
		str++;
		*sign = *sign + 1;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int		minus;
	int		sign;
	int		num;
	char	*ptr_str;

	ptr_str = (char *)str;
	minus = 1;
	sign = 0;
	ptr_str = check_space(ptr_str);
	ptr_str = check_sign(ptr_str, &minus, &sign);
	if (sign > 1)
		return (0);
	num = 0;
	while (*ptr_str >= '0' && *ptr_str <= '9')
	{
		num *= 10;
		num += *ptr_str - '0';
		ptr_str++;
	}
	return (num * minus);
}
