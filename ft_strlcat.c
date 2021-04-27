/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:19:37 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/27 15:24:46 by sdalton          ###   ########.fr       */
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
	size_t		min;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cp = dst + dst_len;
	if (size - 1 > dst_len + src_len)
	{
		min = src_len;
		dst[dst_len + min] = 0;
	}
	else if (size - 1 > dst_len)
	{
		min = size - dst_len - 1;
		dst[dst_len + min] = 0;
	}
	else
		min = 0;
	ft_memcpy(cp, src, min);
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = strlcat(buff1, str, max);
	size_t r2 = ft_strlcat(buff2, str, max);
	printf("%s\n", buff1);
	printf("%s\n", buff2);
}
*/
