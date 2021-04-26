/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:35:47 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 17:33:00 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <ctype.h>*/
/*	checks whether c is a 7-bit unsigned char value that fits
              into the ASCII character set.	*/

int	ft_isascii(int c)
{
	unsigned char	cu;

	cu = (unsigned char) c;
	return (0 <= cu && cu <= 127);
}
