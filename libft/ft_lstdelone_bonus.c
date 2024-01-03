/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:54:27 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:14 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*trgt_lst;

	trgt_lst = lst;
	del(lst->content);
	lst = lst->next;
	free(trgt_lst);
}
