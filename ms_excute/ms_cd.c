/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:08:22 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 11:32:57by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

int	ms_cd(t_data *d, char **pwd)
{
	if (chdir(d->content[1]) == -1)
	{
		perror("Pizza 🍕 & Beer 🍻");
		return (FAILURE);
	}
	free(*pwd);
	pwd = ft_strdup(d->content[1]);
	return (SUCCESS);
}
