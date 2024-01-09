/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:00:23 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 18:23:29 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

static void	del_first_env(t_env *env);
static void	del_back_env(t_data *d, t_env *env, int i);

int	ms_unset(t_data *d, t_env *env)
{
	int			i;

	if (d->content[1] == NULL || env == 0)
		return (SUCCESS);
	i = 1;
	while (d->content[i] != NULL)
	{
		if (d->content[i] == env->name)
			del_first_env(env);
		else
			del_back_env(d, env, i);
	}
	return (SUCCESS);
}

static void	del_first_env(t_env *env)
{
	t_env	*temp;

	temp = env;
	env = env->next;
	free(temp->name);
	free(temp->data);
	free(temp);
}

static void	del_back_env(t_data *d, t_env *env, int i)
{
	int		j;
	t_env	*temp;

	j = 0;
	while ((env + j) != NULL && (env + j)->name != d->content[i])
		j++;
	if ((env + j)->next != NULL)
	{
		temp = (env + j)->next;
		(env + j)->next = (env + j)->next->next;
		free(temp->name);
		free(temp->data);
		free(temp);
	}	
}
