#include "libft.h"
void	ft_bzero(void *b, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)b)[i] = 0;
		i++;
	}
}
