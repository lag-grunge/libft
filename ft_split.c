/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:54:22 by sdalton           #+#    #+#             */
/*   Updated: 2021/05/04 17:17:25 by sdalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function name ft_split											*/
/*Prototype char **ft_split(char const *s, char c);					*/
/*Turn in files -													*/
/*Parameters #1. The string to be split.							*/
/*#2. The delimiter character.										*/
/*Return value The array of new strings resulting from the split.	*/
/*NULL if the allocation fails.										*/
/*External functs. malloc, free										*/
/*Description Allocates (with malloc(3)) and returns an array		*/
/*of strings obtained by splitting ’s’ using the					*/
/*character ’c’ as a delimiter. The array must be					*/
/*ended by a NULL pointer.											*/

static char	*start_string(char *tail, char c)
{
	while (*tail == c)
		tail++;
	return (tail);
}

static char	*get_word(char *tail, char *cur_delim)
{
	size_t	word_len;
	char	*word;

	word_len = cur_delim - tail;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, tail, word_len + 1);
	return (word);
}

static char	**init_split(char *tail, size_t count)
{
	char	**split;

	if (*tail)
		count++;
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split[count--] = NULL;
	if (*tail)
		split[count] = ft_strdup(tail);
	return (split);
}

/*окончание - нет разделителя*/
/*вернуть указатель на выделенную под массив слпита память */
/*разделить на слово и остаток выделив под слово память,*/

char	**ft_split(const char *s, char c)
{
	static size_t	count_words;
	char			**split;
	char			*word;
	char			*tail;
	char			*cur_delim;

	tail = start_string((char *)s, c);
	cur_delim = ft_memchr((const void *)tail, (int) c, ft_strlen(tail));
	if (!cur_delim)
		return (init_split(tail, count_words));
	word = get_word(tail, cur_delim);
	if (!word)
		return (NULL);
	count_words++;
	split = ft_split(tail, c);
	if (!split)
	{
		free(word);
		return (NULL);
	}
	split[--count_words] = word;
	return (split);
}
/*
#include <stdio.h>

int main()
{
	char **split;

	split = ft_split(" 42 and all smth ", ' ');
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}

}
*/
