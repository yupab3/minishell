/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongyeuk <dongyeuk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:25:56 by dongyeuk          #+#    #+#             */
/*   Updated: 2023/10/10 17:38:47 by dongyeuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr_str;
	char			*ptr_s;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	if (len_s <= start)
		return (ft_strdup(""));
	ptr_s = (char *)s;
	if (len > len_s - start)
		len = len_s - start;
	ptr_str = (char *)ft_calloc(1, len + 1);
	if (!ptr_str)
		return (0);
	ft_strlcpy(ptr_str, ptr_s + start, len + 1);
	return (ptr_str);
}
