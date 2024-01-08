/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:16:32 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/08 16:15:45 by dongyeuk         ###   ########.fr       */
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

/* STATUS MACRO */
# define FAILURE	(1)
# define SUCCESS	(0)

/* EXIT_STATUS MACRO */
# define ERR_COMMON	(1)
# define ERR_EXCUTE	(126)
# define ERR_CMD	(127)

/* symbol for io */
typedef enum e_io
{
	INPUT,
	OUTPUT,
	HERE_DOC,
	ATTACH
}	t_io;

/* symbol for data */
typedef enum e_symbol
{
	CMD,
	BUILTIN_CMD;
	LOGICAL_OP,
	PIPE
}	t_symbol;

/* list of io */
typedef struct s_io_list
{
	t_io			symbol;
	char			*content;
	struct s_list	*next;
}	t_io_list;

/* data of tree */
typedef struct s_data
{
	t_symbol	symbol;
	char		**content;
	t_io_list	*io;
}	t_data;

/* tree node */
typedef struct s_tree
{
	t_data			data;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

/* ms_signal.c */
void	handle_ctrl_c(int signum);

#endif