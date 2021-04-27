/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:54:16 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 19:54:21 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**   The atoi() function converts the initial portion of the string
       pointed to by nptr to int.  The behavior is the same as

           strtol(nptr, NULL, 10);

       except that atoi() does not detect errors.

       The atol() and atoll() functions behave the same as atoi(),
       except that they convert the initial portion of the string to
       their return type of long or long long.
RETURN VALUE
       The converted value or 0 on error.
**/

static int	ft_isspace(int c)
{
	unsigned char	cu;

	cu = (unsigned char)c;
	return ((9 <= cu && cu <= 13) || cu == 32);
}

int	ft_atoi(char *s)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s))
		n = 10 * n + (*s++) - 48;
	return (n * sign);
}
