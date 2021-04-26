/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:49:49 by sdalton           #+#    #+#             */
/*   Updated: 2021/04/26 15:50:22 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** The c argument is an int, the value of which the application
       shall ensure is a character representable as an unsigned char or
       equal to the value of the macro EOF. If the argument has any
       other value, the behavior is undefined. **/

int	ft_isspace(int c)
{
	unsigned char	cu;

	cu = (unsigned char)c;
	return ((9 <= cu && cu <= 13) || cu == 32);
}
