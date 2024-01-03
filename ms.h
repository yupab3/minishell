/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:16:32 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/03 16:22:45 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_H
# define MS_H

# include "./libft/libft.h"
# include <readline/readline.h>
# include <readline/history.h>
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

/* STATUS MACRO */
# define FAILURE	(1)
# define SUCCESS	(0)

/* EXCUTE MACRO */
# define TRUE		(1)
# define FALSE		(0)

/* EXIT_STATUS MACRO */
# define ERR_COMMON	(1)
# define ERR_EXCUTE	(126)
# define ERR_CMD	(127)

#endif