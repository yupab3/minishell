/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 08:15:22 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:22:13 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_mal_add;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (size > SIZE_MAX / count)
		return (0);
	ptr_mal_add = malloc(count * size);
	if (!ptr_mal_add)
		return (0);
	ft_bzero(ptr_mal_add, count * size);
	return (ptr_mal_add);
}
