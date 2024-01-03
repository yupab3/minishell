/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:15:05 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:12 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*trgt_lst;

	trgt_lst = *lst;
	while (*lst != NULL)
	{
		trgt_lst = *lst;
		del(trgt_lst->content);
		*lst = (*lst)->next;
		free(trgt_lst);
	}
}
