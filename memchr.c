#include "libft.h"

/** The memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as
       unsigned char.
        The memchr() functions return a pointer to the
       matching byte or NULL if the character does not occur in the
       given memory area.
**/

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char cu;
    char *sc;

    i = 0;
    cu = c;
    sc = (char *)s;
    while (i < n)
    {
        if (sc[i] == cu)
            return (sc + i); 
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main()
{
    char s[13] = "Its string!!!";
    int c;

    scanf("%d", &c);
    ft_memchr(s, c, 3);
    return (0);
}