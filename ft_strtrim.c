/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:00:32 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/28 15:27:23 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function name ft_strtrim										*/
/*Prototype char *ft_strtrim(char const *s1, char const *set);	*/
/*Turn in files -												*/
/*Parameters #1. The string to be trimmed.						*/
/*#2. The reference set of characters to trim.					*/
/*Return value The trimmed string. NULL if the allocation fails.*/
/*External functs. malloc										*/
/*Description Allocates (with malloc(3)) and returns a copy of	*/
/*’s1’ with the characters specified in ’set’ removed			*/
/*from the beginning and the end of the string.					*/

static int	is_copy(char const *set, int c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ts;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ts = ft_strdup(s1);
	if (!ts)
		return (NULL);
	while (s1[i])
	{
		if (is_copy(set, s1[i]))
		{
			ts[j] = s1[i];
			j++;
		}
		i++;
	}
	ts[j] = 0;
	return (ts);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
