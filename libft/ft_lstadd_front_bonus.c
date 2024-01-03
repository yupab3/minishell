/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:52:06 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:10 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		new->next = 0;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
