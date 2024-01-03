/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:26:47 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 17:37:46 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		f(lst->content);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
