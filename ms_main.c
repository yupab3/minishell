/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:44:26 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/09 14:55:17 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms.h"

int	main(int argc, char **argv, char **envp)
{
	t_data_set	*ds;

	init_data(&ds, envp);
	while (1)
	{
		ft_rl_new_line(ds);
	}
	exit(0);
}
