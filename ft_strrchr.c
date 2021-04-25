#include "libft.h"

/** searches for the last occurrence of the character c (an unsigned char) 
 * in the string pointed to, by the argument str.
 **/

char    *ft_strrchr(const char *str, int c)
{
    char *res;
    char *next;
    size_t r_str_len;
    size_t cu;

    r_str_len = ft_strlen(str);
    cu = c;
    res = NULL;
    next = (char *)ft_memchr(str, cu, r_str_len);
    while (next)
    {
        res = next;
        r_str_len -= (res - str + 1); 
        next = ft_memchr(res + 1, cu, r_str_len);
    }
    return (res);
}

#include <stdio.h>

static int main()
{
    char *s = "Its string!!!";
    char *res;

    res = ft_strrchr(s, 's');


}