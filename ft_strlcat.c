/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:19:37 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 14:50:36 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 *  strlcpy() and strlcat() take the full 
 * size of the buffer (not just the length) and guarantee to NUL-terminate 
 * the result (as long as size is larger than 0 or, in the case of strlcat(), 
 * as long as there is at least one byte free in dst). Note that a byte 
 * for the NUL should be included in size. Also note that strlcpy()
 *  and strlcat() only operate on true ''C'' strings. This means that 
 * for strlcpy() src must be NUL-terminated and for strlcat() both src 
 * and dst must be NUL-terminated. **/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*cp;
	size_t		dst_len;
	size_t		src_len;
	int			i;
	size_t		min;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cp = dst + dst_len;
	i = size - dst_len - 1;
	if (i > 0)
	{
		if ((size_t)i < src_len)
			min = i;
		else
			min = src_len;
		ft_memcpy(cp, src, min);
		if ((size_t)i > src_len)
			ft_bzero(cp + min, (size_t)(i - src_len));
		dst[size - 1] = 0;
	}
	return (dst_len + src_len);
}
