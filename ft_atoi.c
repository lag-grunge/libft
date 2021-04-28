/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:54:16 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/28 11:18:42 by sdalton          ###   ########.fr       */
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

static int	check_overflow(int n1, int n2, int sign)
{
	if (sign == 1)
	{
		if (n1 > 2147483647 - n2)
			return (-1);
		else
			return (n1 + n2);
	}
	else if (sign == -1)
	{
		if (-n1 < -2147483648 + n2)
			return (-1);
		else
			return (-n1 - n2);
	}
	else
		return (0);
}

int	ft_atoi(char *s)
{
	int		n;
	int		sign;
	size_t	digits;

	n = 0;
	sign = 1;
	digits = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s) && digits++ < 10)
		n = 10 * n + (*s++) - 48;
	if (ft_isdigit(*s) && !(ft_isdigit(s[1])))
		return (check_overflow(9 * n + (*s++) - 48, n, sign));
	else if (ft_isdigit(*s))
		return (-1);
	else
		return (sign * n);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%d\n", atoi(argv[i]));
			printf("%d\n", ft_atoi(argv[i]));
			i++;
		}
	}

}*/
