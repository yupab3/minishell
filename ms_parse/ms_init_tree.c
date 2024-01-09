/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_init_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:34:45 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/09 13:48:56 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ms.h"

t_tree	*create_tree(void)
{
	t_tree	*b_tree;

	b_tree = (t_tree *)ft_calloc(1, sizeof(t_tree));
	return (b_tree);
}
