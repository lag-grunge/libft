#include "libft.h"

/** strncmp()	functions lexicographically compare the	null-
     terminated	strings	s1 and s2.

     The strncmp() function compares not more than len characters.  Because
     strncmp() is designed for comparing strings rather	than binary data,
     characters	that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp()	functions return an integer greater than,
     equal to, or less than 0, according as the	string s1 is greater than,
     equal to, or less than the	string s2.  The	comparison is done using un-
     signed characters,	so that	`\200' is greater than `\0'.
**/

int     ft_strncmp(const char *s1, const char *s2, size_t len)
{
    size_t i;
    unsigned char *c1;
    unsigned char *c2;

    i = 0;
    c1 = (unsigned char *)s1;
    c2 = (unsigned char *)s2;
    while (i < len && c1[i] && c2[i])
    {
        if (c1[i] - c2[i])
            return (c1[i] - c2[i]);
        i++;
    }
    return (c1[i] - c2[i]);
}

#include <stdio.h>

static int main()
{
    int a = ft_strncmp("qwerty\0", "qwerty\100", 7);
    int b = strncmp("qwerty\0", "qwerty\100", 7);

    printf("%d %d %d\n", a, b, strncmp("qwerty\0", "qwerty\100", 7));

}