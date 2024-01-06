/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:16:32 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/06 13:37:19 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_H
# define MS_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <dirent.h>
# include <string.h>
# include <errno.h>
# include <sys/ioctl.h>
# include <termios.h>
# include <curses.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef enum e_symbol
{
	CMD,		// 0
	LOGICAL_OP,	// 1
	PIPE,		// 2
	REDIRECT,	// 3
	HERE_DOC	// 4
}			t_symbol;

typedef struct s_data
{
	t_symbol	*symbol;
	char		*content;
}			   t_data;

typedef struct s_tree
{
	t_data			data;
	struct s_tree	*left;
	struct s_tree	*right;
}			   t_tree;

/* STATUS MACRO */
# define FAILURE	(1)
# define SUCCESS	(0)

/* EXIT_STATUS MACRO */
# define ERR_COMMON	(1)
# define ERR_EXCUTE	(126)
# define ERR_CMD	(127)

#endif