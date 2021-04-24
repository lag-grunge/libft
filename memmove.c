#include "libft.h"

/** The memmove() function copies n bytes from memory area src to
**       memory area dest.  The memory areas may overlap: copying takes
         place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest. **/
void    *ft_memmove(void *dst, const void *src, size_t n)
{
    int k;
    size_t i;
    
    k = (src - dst);
    i = 0;
    if (k == 0)
        return ((void *)src);
    if (k > 0)
        ft_memcpy(dst, src, n);
    else
    {
        while (i < n)
        {
            ((char *)dst)[n - 1 - i] = ((char *)src)[n - 1 - i];
            i++;
        }
    }
    return (dst);
}

#include <stdio.h>

static int ft_isdigit(int c)
{
    return (48 <= c && c <= 57);
}

/** The c argument is an int, the value of which the application
       shall ensure is a character representable as an unsigned char or
       equal to the value of the macro EOF. If the argument has any
       other value, the behavior is undefined. **/
static int ft_isspace(int c)
{
    return ((9 <= c && c <= 13) || c == 32);
}

/**   The atoi() function converts the initial portion of the string
       pointed to by nptr to int.  The behavior is the same as

           strtol(nptr, NULL, 10);

       except that atoi() does not detect errors.

       The atol() and atoll() functions behave the same as atoi(),
       except that they convert the initial portion of the string to
       their return type of long or long long.
RETURN VALUE         top
       The converted value or 0 on error.
**/ 

static int ft_atoi(char *s)
{
    int n;
    int sign;

    n = 0;
    sign = 1;
    while (ft_isspace(*s))
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
        s++;
    while (ft_isdigit(*s))
        n = 10 * n + (*s++) - 48;
    return (n * sign);
}   

int main(int argc, char *argv[])
{
    char b1[17] = "Its string!!!!!!\n";
    int n = 17;
    int k;
    char *b2;

    if (argc == 2)
    {
        k = ft_atoi(argv[1]);
        b2 = (char *)b1 + k;
        write(1, b1, n);
        b2 = ft_memmove(b2, b1, n);
        write(1, b2, n);
    }
    else
        write(2, "usage: one argument - offset dst to src\n", 40);
    return (0);

}