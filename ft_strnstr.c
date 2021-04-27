/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:53:43 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/27 10:56:45 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/** The strnstr() function locates the	first occurrence of the	null-termi
*     nated string little in the	string big, where not more than	len characters
*     are searched.  Characters that appear after a `\0'	character are not
*     searched.	
*   RETURN VALUES
*    If	little is an empty string, big is returned; if little occurs nowhere
*    in	big, NULL is returned; otherwise a pointer to the first	character of
*     the first occurrence of little is returned.
**/

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	while (i < len)
	{
		if (!ft_memcmp(big + i, little, little_len))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
