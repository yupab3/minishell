/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:04:16 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 19:11:57 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

void	ms_exit(void)
{
	ft_putstr_fd("exit\n", 1);
	exit(SUCCESS);
}
