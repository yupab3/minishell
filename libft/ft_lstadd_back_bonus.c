/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:19:29 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:06 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_lst;

	if (!(*lst))
		*lst = new;
	else
	{
		ptr_lst = *lst;
		while (ptr_lst->next != 0)
			ptr_lst = ptr_lst->next;
		ptr_lst->next = new;
	}
}
