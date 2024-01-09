/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:22:59 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 18:29:44 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

int	ms_env(t_env *env)
{
	while (env != NULL)
	{
		ft_putstr_fd(env->name, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(env->data, 1);
		ft_putstr_fd("\n", 1);
		env = env->next;
	}
	return (SUCCESS);
}
