#ifndef LIBFT_H
# define LIBFT_H
#include <string.h> //memset other lib.c
#include <stdlib.h> //malloc
#include <stddef.h> //size_t
#include <io.h> //write

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char * src, size_t n);
size_t  ft_strlcat(char *dst, const char * src, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char	*big, const char *little, size_t len);
int     ft_strncmp(const char	*s1, const char	*s2, size_t len);
void    *ft_calloc(size_t nmemb, size_t size);


#endif
