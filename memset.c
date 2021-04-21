#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	char cu;
	size_t i;

	cu = c;
	i = 0;
	while (i < len)
	{
		((char *)b)[i] = cu;
		i++;
	}
	return (b);
}
