/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:48:42 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/06 16:14:22 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms.h"

void	handle_ctrl_c(int signum)
{
	signum++;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
}
