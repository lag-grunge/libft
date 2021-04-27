/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:08:56 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/27 13:55:18 by sdalton          ###   ########.fr       */
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
	int		i;
	size_t	min;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = n - src_len - 1;
	if (i > 0)
		min = src_len;
	else
		min = n - 1;
	ft_memcpy(dst, src, min);
	dst[min] = 0;
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest1[20];
	char dest2[20];
	ft_memset(dest1, 'A', sizeof(dest1));
	ft_memset(dest2, 'A', sizeof(dest2));
	printf("%lu %s\n", ft_strlcpy(dest1, "hello !", 2), dest1);
	printf("%lu %s\n", strlcpy(dest2, "hello !", 2), dest2);

	return (0);
}*/