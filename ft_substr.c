/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:03:36 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/28 14:38:43 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Function name ft_substr											*/
/*Prototype char *ft_substr(char const *s, unsigned int start,		*/
/*size_t len);														*/
/*Turn in files -													*/
/*Parameters #1. The string from which to create the substring.		*/
/*#2. The start index of the substring in the string				*/
/*’s’.																*/
/*#3. The maximum length of the substring.							*/
/*Return value The substring. NULL if the allocation fails.			*/
/*External functs. malloc											*/
/*Description Allocates (with malloc(3)) and returns a substring	*/
/*from the string ’s’.												*/
/*The substring begins at index ’start’ and is of					*/
/*maximum size ’len’.												*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;

	ss = ft_strdup(s + start);
	if (!ss)
		return (NULL);
	if (len < ft_strlen(ss))
		ss[len] = 0;
	return (ss);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	}
	return (0);
}*/
