/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejilee <jaejilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 08:15:22 by dongyeuk          #+#    #+#             */
/*   Updated: 2024/01/03 15:15:35 by jaejilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_mal_add;

	if (size == 0 || count == 0)
	{
		ptr_mal_add = malloc(0);
		if (ptr_mal_add == 0)
			exit(ERR_COMMON);
		return (ptr_mal_add);
	}
	if (size > SIZE_MAX / count)
		exit(ERR_COMMON);
	ptr_mal_add = malloc(count * size);
	if (ptr_mal_add == 0)
		exit(ERR_COMMON);
	ft_bzero(ptr_mal_add, count * size);
	return (ptr_mal_add);
}
