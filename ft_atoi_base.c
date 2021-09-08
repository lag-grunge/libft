/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:54:16 by sdalton           #+#    #+#             */
/*   Updated: 2021/09/08 16:24:38 by sdalton          ###   ########.fr       */
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

static int	ft_prefix(const char **s, const char *prefix)
{
	size_t	prefix_len;
	int		sign;
	char	*ptr;

	prefix_len = ft_strlen(prefix);
	sign = 1;
	ptr = (char *)*s;
	while ((9 <= *ptr && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		sign = -2 * (*ptr == '-') + 1;
		ptr++;
	}
	if (ft_strncmp(ptr, prefix, prefix_len))
		return (0);
	ptr += prefix_len;
	while (*ptr == '0')
		ptr++;
	*s = ptr;
	return (sign);
}

static int	check_overflow(int n1, int n2, int sign)
{
	if (sign == 1)
	{
		if (n1 > INT_MAX - n2)
			return (-1);
		else
			return (n1 + n2);
	}
	if (-n1 < INT_MIN + n2)
		return (0);
	else
		return (-n1 - n2);
}

static int	get_digits(long int n, size_t base_len)
{
	size_t	dig;

	dig = 0;
	if (!n)
		return (0);
	while (n)
	{
		n /= base_len;
		dig++;
	}
	return (dig);
}

int	ft_atoi_base(const char *s, char *base, char *prefix)
{
	int		n;
	int		sign;
	size_t	near_ovflw;
	size_t	base_len;
	char 	*pos_base;

	sign = ft_prefix(&s, prefix);
	if (!sign)
		return (-1);
	if (!*s)
		return (0);
	n = 0;
	base_len = ft_strlen(base);
	near_ovflw = get_digits(INT_MAX, base_len) - 1;
	pos_base = ft_strchr(base, *s);
	while (*s && pos_base && near_ovflw--)
	{
		n = base_len * n + (pos_base - base);
		s++;
		pos_base = ft_strchr(base, *s);
	}
	if (!*s || !pos_base)
		return (sign * n);
	if ((size_t)(ft_strchr(base, s[1]) - base) < base_len)
		return (-(sign == 1));
	return (check_overflow((base_len - 1) * n + (pos_base - base), n, sign));
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		printf("LONG MAX %ld sizeof %zu\n", LONG_MAX, sizeof(long));
		while (i < argc)
		{
			printf("%d ", atoi(argv[i]));
			printf("%d ", ft_atoi_base(argv[i], "0123456789", "\0"));
			printf("%d\n", ft_atoi_base(argv[i], "0123456789abcdef", "0x"));
			
			i++;
		}
	}

}*/
