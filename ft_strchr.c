#include "libft.h"

/** char *strchr(const char *str, int c) searches for the first 
 * occurrence of the character c (an unsigned char) in the string 
 * pointed to by the argument str.
 * This returns a pointer to the first occurrence of the character
 * c in the string str, or NULL if the character is not found.**/

char *ft_strchr(const char *str, int c)
{
    size_t i;
    size_t cu;

    i = 0;
    cu = c;
    while (str[i])
    {
        if (cu == str[i])
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}

char *ft_strchr1(const char *str, int c)
{
    return ((char *)ft_memchr(str, c, ft_strlen(str)));
}

int main()
{
    char *str = "Its string!!!";
    char *res;

    res = ft_strchr(str, 's');
    res = ft_strchr1(str, 's');
}