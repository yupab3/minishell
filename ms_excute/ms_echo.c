/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:26:10 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/08 20:18:39 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

static int	is_nflag(char *s);

int	ms_echo(t_data *d)
{
	int	i;
	int	nl_flag;

	nl_flag = TRUE;
	i = 1;
	while (d->content[i] != NULL && is_nflag(d->content[i]) == TRUE)
		i++;
	if (i > 1)
		nl_flag = FALSE;
	while (d->content[i] != NULL && d->content[i] != 0)
		ft_putstr_fd(d->content[i++], 1);
	if (nl_flag == TRUE)
		printf("\n");
	return (SUCCESS);
}

static int	is_nflag(char *s)
{
	int	i;

	if (s[0] != '-')
		return (FALSE);
	i = 0;
	while (s[++i] != 0)
		if (s[i] != 'n')
			return (FALSE);
	return (TRUE);
}
