/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:44:47 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/27 10:45:01 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** searches for the last occurrence of the character c (an unsigned char) 
 * in the string pointed to, by the argument str.
 **/

char	*ft_strrchr(const char *str, int c)
{
	char		*res;
	char		*next;
	size_t		r_str_len;
	size_t		str_len;
	size_t		cu;

	str_len = ft_strlen(str);
	cu = c;
	res = NULL;
	next = (char *)ft_memchr(str, cu, str_len);
	while (next)
	{
		r_str_len = str_len - (next - str);
		res = next;
		next = ft_memchr(res + 1, cu, r_str_len);
	}
	return (res);
}
