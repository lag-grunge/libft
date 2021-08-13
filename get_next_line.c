#include "libft.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

int	get_next_line(int fd, char **line)
{
	int		ret;
	char	*buf;
	char	ch;
	size_t	i;

	buf = malloc(BUFFER_SIZE);
	if (!buf)
		return (-1);
	*line = buf;
	ch = 0;
	ret = 1;
	i = 0;
	while (ret == 1 && ch != 10)
	{
		ret = read(fd, buf + i, 1);
		ch = buf[i];
		i++;
	}
	buf[i - 1] = 0;
	return (ret);
}
