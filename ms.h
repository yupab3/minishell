/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:16:32 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/09 19:27:44 by jaejilee         ###   ########.fr       */
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
	BUILTIN_CMD,
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

/* env list */
typedef struct s_env
{
	char			*name;
	char			*data;
	struct s_env	*next;
}	t_env;

/* data set */
typedef struct s_data_set
{
	t_tree	*tree;
	t_env	*env_list;
	int		exitcode;
}	t_data_set;

/* ms_signal.c */
void	handle_ctrl_c(int signum);

/* ./ms_excute/ms_echo.c */
int		ms_echo(t_data *d);
int		ms_cd(t_data *d, char **pwd);
int		ms_pwd(char *pwd);
int		ms_export(t_data *d, t_env *env);
void	ms_exit(int exitcode);

#endif