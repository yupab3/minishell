/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:48:42 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/09 14:31:21 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms.h"

static void	handle_ctrl_c(int signum);
static void	init_signal(void);

void	init_data(t_data_set **ds, char **envp)
{
	init_signal();
	*ds = init_data_set(envp);
}

static void	init_signal(void)
{
	rl_catch_signals = 0;
	signal(SIGINT, handle_ctrl_c);
	signal(SIGQUIT, SIG_IGN);
}

static void	handle_ctrl_c(int signum)
{
	signum++;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
}

static t_env	*init_env(char **envp)
{
	t_env	*head;
	t_env	*trgt;
	t_env	*tmp;
	int		str_idx;
	int		idx;

	head = (t_env *)ft_calloc(1, sizeof(t_env));
	trgt = head;
	idx = 0;
	while (envp[idx] != NULL)
	{
		str_idx = ft_strchr(envp[idx], '=') - envp[idx] + 1;
		trgt->name = (char *)ft_calloc(str_idx, 1);
		ft_strlcpy(trgt->name, envp[idx], str_idx);
		str_idx = ft_strchr(envp[idx], '=') - ft_strchr(envp[idx], '\0') + 1;
		trgt->data = (char *)ft_calloc(str_idx, 1);
		ft_strlcpy(trgt->data, envp[idx], str_idx);
		idx++;
		tmp = NULL;
		if (envp[idx] != NULL)
			tmp = (t_env *)ft_calloc(1, sizeof(t_env));
		trgt->next = tmp;
		trgt = tmp;
	}
	return (head);
}

static t_data_set	*init_data_set(char **envp)
{
	t_data_set	*ds;

	ds = (t_data_set *)ft_calloc(1, sizeof(t_data_set));
	ds->tree = create_tree();
	ds->env_list = init_env(envp);
	return (ds);
}