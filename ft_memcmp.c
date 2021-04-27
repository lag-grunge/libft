#include "libft.h"

/** DESCRIPTION         
       The memcmp() function compares the first n bytes (each
       interpreted as unsigned char) of the memory areas s1 and s2.
    RETURN VALUE         
       The memcmp() function returns an integer less than, equal to, or
       greater than zero if the first n bytes of s1 is found,
       respectively, to be less than, to match, or be greater than the
       first n bytes of s2.

       For a nonzero return value, the sign is determined by the sign of
       the difference between the first pair of bytes (interpreted as
       unsigned char) that differ in s1 and s2.

       If n is zero, the return value is zero. **/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;
	int				res;

	i = 0;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (i < n)
	{
		res = sc1[i] - sc2[i];
		if (res)
			return (res);
		i++;
	}
	return (0);
}
<<<<<<< HEAD

#include <stdio.h>

static int main()
{
    const char *s1 = "ABXCD";
    const char *s2 = "ABUCD";

    for (int i = 0; i < 5; i++)
        printf("%d\n", ft_memcmp(s1, s2, i));

}
=======
>>>>>>> 01ce198bc819a92786af54dbb2636e52d341d038
