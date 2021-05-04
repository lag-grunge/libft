/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:33:47 by sdalton           #+#    #+#             */
/*   Updated: 2021/05/04 13:27:12 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Function name ft_lstadd_back									*/
/*	Prototype void ft_lstadd_back(t_list **lst, t_list *new);		*/
/*	Turn in files -                                                 */
/*	Parameters #1. The address of a pointer to the first link of    */
/*	a list.                                                         */
/*	 #2. The address of a pointer to the element to be              */
/*	added to the list.                                              */
/*	Return value None                                               */
/*	External functs. None                                           */
/*	Description Adds the element ’new’ at the end of the list.      */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;	

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

#include <string.h>
#include <stdio.h>

int main ()
{
 
	t_list *l = ((void *)0);
 	t_list *n = ft_lstnew(strdup("OK"));
                                          
 	ft_lstadd_back(&l, n);
 	if (l == n && !strcmp(l->content, "OK"))
 	{
 		free(l->next);
		free(l);
		printf("TEST_SUCCESS");
	 }
	 else
	 {
		free(l->next);
		free(l);
		printf("TEST_FAILED");
	 }
}
