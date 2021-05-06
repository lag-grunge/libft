/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:08:56 by sdalton           #+#    #+#             */
/*   Updated: 2021/05/06 14:52:06 by sdalton          ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int n)
{
	int				i;
	unsigned int	min;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = n - src_len - 1;
	if (i > 0)
	{
		min = src_len;
		dst[min] = 0;
	}
	else if ((int)n > 0)
	{
		min = n - 1;
		dst[min] = 0;
	}
	else
		min = 0;
	ft_memcpy(dst, src, min);
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[42];
	int  res;
	char *src =  "dsfhdfh";
	uint size = -1;

	printf("input %s %u\n", src, size);
	//res = strlcpy(dest, src, size);
	//printf("result orig %s %u\n", dest, res);
	res = ft_strlcpy(dest, src, size);
	printf("result my %s %u\n", dest, res);
	
}
*/