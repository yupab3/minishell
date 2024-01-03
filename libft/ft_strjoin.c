/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:56:49 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 16:24:21 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*joined_str;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = (char *)ft_calloc(1, total_len);
	if (!joined_str)
		return (0);
	ft_strlcat(joined_str, (char *)s1, total_len);
	ft_strlcat(joined_str, (char *)s2, total_len);
	return (joined_str);
}
