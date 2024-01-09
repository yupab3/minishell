/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:35:32 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/09 15:56:27 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

static int	have_equal(char *s);
static char	*dup_name(char *s, int loc_equal);
static char	*dup_data(char *s, int loc_equal);
static void	add_env_data(t_env *env, t_env *new);

int	ms_export(t_data *d, t_env *env)
{
	t_env	*new_env;
	int		loc_equal;
	int		i;

	if (d->content[1] == NULL)
		return (FAILURE);
	i = 1;
	while (d->content[i] != NULL)
	{
		loc_equal = have_equal(d->content[i]);
		if (loc_equal != 0)
		{
			new_env = (t_env *)ft_calloc(1, sizeof(t_env));
			new_env->name = dup_name(d->content[i], loc_equal);
			new_env->data = dup_data(d->content[i], loc_equal);
			new_env->next = NULL;
			add_env_data(env, new_env);
		}
	}
	return (SUCCESS);
}

static int	have_equal(char *s)
{
	int	i;

	if (s[0] == '=')
	{
		ft_putstr_fd("Pizza 🍕 & Beer 🍻: export: \'", 1);
		ft_putstr_fd(s, 1);
		ft_putstr_fd("\' not a valid identifier\n", 1);
		return (0);
	}
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == '=')
			return (i);
		i++;
	}
	return (0);
}

static char	*dup_name(char *s, int loc_equal)
{
	char	*res;
	int		i;

	res = (char *)ft_calloc(loc_equal + 1, sizeof(char));
	i = 0;
	while (i < loc_equal)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static char	*dup_data(char *s, int loc_equal)
{
	char	*res;
	int		data_len;
	int		i;

	data_len = ft_strlen(s) - loc_equal;
	res = (char *)ft_calloc(data_len + 1, sizeof(char));
	i = 0;
	while (i < data_len)
	{
		res[i] = s[loc_equal + 1 + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static void	add_env_data(t_env *env, t_env *new)
{
	int	i;

	if (env == 0)
	{
		env = new;
	}
	i = 0;
	while ((env + i)->name != new->name && (env + i)->next != NULL)
		i++;
	if ((env + i)->name == new->name)
	{
		(env + i)->data = new->data;
		free(new->name);
		free(new);
	}
	else
		(env + i)->next = new;
}
