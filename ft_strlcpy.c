/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:08:56 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 14:19:05 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 *  strlcpy() and strlcat() take the full 
 * size of the buffer (not just the length) and guarantee to NUL-terminate 
 * the result (as long as size is larger than 0 or, in the case of strlcat(), 
 * as long as there is at least one byte free in dst). Note that a byte 
 * for the NUL should be included in size. Also note that strlcpy()
 *  and strlcat() only operate on true ''C'' strings. This means that 
 * for strlcpy() src must be NUL-terminated and for strlcat() both src 
 * and dst must be NUL-terminated. **/

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = n - src_len - 1;
	if (i > 0)
	{
		ft_memcpy(dst, src, src_len);
		ft_bzero(dst + src_len, i + 1);
	}
	else
	{
		ft_memcpy(dst, src, n - 1);
		dst[n - 1] = 0;
	}
	return (ft_strlen(src));
}
