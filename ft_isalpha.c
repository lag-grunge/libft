/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:07:40 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 16:31:52 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	#include <ctype.h>
 isalpha()
              checks for an alphabetic character; in the standard "C"
		  locale, it is equivalent to (isupper(c) || islower(c)).
		  p> " 'Q' in normal mode enters Ex mode. You almost never want this.''"
*/

static int	ft_islower(int c)
{
	unsigned char	cu;

	cu = (unsigned char)c;
	return ('a' <= cu && cu <= 'z');
}

static int	ft_isupper(int c)
{
	unsigned char	cu;

	cu = (unsigned char)c;
	return ('A' <= cu && cu <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
