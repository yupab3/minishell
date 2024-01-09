/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:08:22 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 10:32:55 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

int	ms_cd(t_data *d, char **envp, t_dir *dir)
{
	if (chdir(d->content[1]) == -1)
	{
		perror("Pizza 🍕 & Beer 🍻");
		return (FAILURE);
	}
	free(dir->oldpwd);
	dir->oldpwd = dir->pwd;
	dir->pwd = ft_strdup(d->content[1]);
	if (dir->pwd == 0)
		exit(1);
	return (SUCCESS);
}
