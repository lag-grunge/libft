#include "libft.h"
/** The strnstr() function locates the	first occurrence of the	null-termi
*     nated string little in the	string big, where not more than	len characters
*     are searched.  Characters that appear after a `\0'	character are not
*     searched.	
*   RETURN VALUES
*    If	little is an empty string, big is returned; if little occurs nowhere
*    in	big, NULL is returned; otherwise a pointer to the first	character of
*     the first occurrence of little is returned.
**/

char    *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t i;
    size_t little_len;

    i = 0;
    little_len = ft_strlen(little);
    while (i < len)
    {
        if(!ft_memcmp(big + i, little, little_len))
            return ((char *)big + i);
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main()
{
    char * res, * res2;
 //   res = strstr(NULL, "sdhdfh");
    res2 = ft_strnstr(NULL, "sdhdfh", 3);
    return (0);
}