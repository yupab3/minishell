/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:44:26 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/08 19:57:36 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms.h"

int	main(int argc, char **argv, char **envp)
{
	char	*str;

	rl_catch_signals = 0;
	signal(SIGINT, handle_ctrl_c);
	signal(SIGQUIT, SIG_IGN);
	while (1)
	{
		str = readline("prompt : ");
		if (str == NULL)
		{
			printf("\033[1A\033[9Cexit\n");
			exit(1);
		}
		if (str)
			printf("%s\n", str);
		else
			break ;
		add_history(str);
		free(str);
	}
	return (0);
}
