/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 08:54:14 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:24:16 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr_str;
	size_t	ptr_size;

	ptr_size = ft_strlen(s1) + 1;
	ptr_str = (char *)malloc(ptr_size);
	if (!ptr_str)
		return (0);
	ft_strlcpy(ptr_str, s1, ptr_size);
	return (ptr_str);
}
