/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:06:08 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 17:21:48 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	free_lst(t_list *itered_head, void (*del)(void *), size_t count)
{
	t_list	*ptr_lst;

	while (count)
	{
		ptr_lst = itered_head;
		itered_head = itered_head->next;
		del(ptr_lst);
		free(ptr_lst);
		count--;
	}
}

t_list	*make_new_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr_lst;
	void	*ptr_content;

	ptr_content = f(lst->content);
	if (!ptr_content)
		return (0);
	ptr_lst = ft_lstnew(ptr_content);
	if (!ptr_lst)
		del(ptr_content);
	return (ptr_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*itered_head;
	t_list	*itered_lst;
	size_t	count;

	count = 1;
	itered_lst = make_new_node(lst, f, del);
	if (!itered_lst)
		return (0);
	itered_head = itered_lst;
	while (lst->next)
	{
		lst = lst->next;
		itered_lst->next = make_new_node(lst, f, del);
		if (!itered_lst)
		{
			free_lst(itered_head, del, count);
			return (0);
		}
		itered_lst = itered_lst->next;
		count++;
	}
	itered_lst->next = NULL;
	return (itered_head);
}
