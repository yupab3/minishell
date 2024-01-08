/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:26:10 by jaejilee          #+#    #+#             */
/*   Updated: 2024/01/08 17:05:17 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

void	ms_echo(t_data *d)
{
	int	i;
	int	nl_flag;

	if (d->content[1] != NULL && ft_strlen(d->content[1]) == 2
		&& ft_strncmp(d->content[2], "-n", 2) == 0)
	{
		i = 1;
		nl_flag = TRUE;
	}
	else
	{
		i = 0;
		nl_flag = FALSE;
	}
	while (d->content[++i] != 0)
		printf("%s ", d->content[i]);
	if (nl_flag == FALSE)
		printf("\n");
}
