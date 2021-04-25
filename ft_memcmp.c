#include "libft.h"

/** DESCRIPTION         top
       The memcmp() function compares the first n bytes (each
       interpreted as unsigned char) of the memory areas s1 and s2.
    RETURN VALUE         top
       The memcmp() function returns an integer less than, equal to, or
       greater than zero if the first n bytes of s1 is found,
       respectively, to be less than, to match, or be greater than the
       first n bytes of s2.

       For a nonzero return value, the sign is determined by the sign of
       the difference between the first pair of bytes (interpreted as
       unsigned char) that differ in s1 and s2.

       If n is zero, the return value is zero. **/


int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *sc1;
    char *sc2;

    i = 0;
    sc1 = (char *)s1;
    sc2 = (char *)s2;
    while (i < n)
    {
        if (sc1[i]- sc2[i])
            return (sc1[i] - sc2[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>

static int main()
{
    const char *s1 = "ABXCD";
    const char *s2 = "ABUCD";

    for (int i = 0; i < 5; i++)
        printf("%d\n", ft_memcmp(s1, s2, i));

}