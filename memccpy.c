#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char cu;

	i = 0;
	cu = (char)c;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((char *)dst)[i] == cu)
			return (void *)((char *)dst + i + 1);
		i++;
	}
	return ((void *)0);
}
