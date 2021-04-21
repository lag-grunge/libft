#ifndef LIBFT_H
# define LIBFT_H
#include <string.h> //memset
#include <stdlib.h> //malloc
#include <stddef.h> //size_t
#include <unistd.h> //write
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);



#endif
