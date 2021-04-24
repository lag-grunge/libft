#include "libft.h"

  /**The strlen() function calculates the length of the string pointed
       to by s, excluding the terminating null byte ('\0').
RETURN VALUE        
       The strlen() function returns the number of bytes in the string
       pointed to by s. **/

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

#include <stdio.h>

static int main()
{
    const char *s1 = "sgsgsgsg\0";
    char *s2 = "sgsgsgsg";
    printf("%d", ft_strlen(s1));
    printf("%d", ft_strlen(s2));
    return (0);
}