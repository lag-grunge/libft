#include "libft.h"
/** 
 *  strlcpy() and strlcat() take the full 
 * size of the buffer (not just the length) and guarantee to NUL-terminate 
 * the result (as long as size is larger than 0 or, in the case of strlcat(), 
 * as long as there is at least one byte free in dst). Note that a byte 
 * for the NUL should be included in size. Also note that strlcpy()
 *  and strlcat() only operate on true ''C'' strings. This means that 
 * for strlcpy() src must be NUL-terminated and for strlcat() both src 
 * and dst must be NUL-terminated. **/

size_t  ft_strlcat(char *dst, const char * src, size_t size)
{
    char *cp;
    size_t dst_len;
    size_t src_len;
    int i;
    size_t min;

    
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    cp = dst + dst_len;
    i = size - dst_len - 1;
    if (i > 0)
    {
        min = ((size_t)i < src_len) ? i : src_len; 
        ft_memcpy(cp, src, min);
        if ((size_t)i > src_len)
            ft_bzero(cp + min, (size_t)(i - src_len));
        dst[size - 1] = 0;
    }
    return (dst_len + src_len);
}

#include <stdio.h>

int main()
{
    char dst[20];
    char dst1[20];
    char *str = "Word!";
    char *src = "Its string!!!!";

    ft_memset(dst, ' ', 20);
    memset(dst1, ' ', 20);
    ft_strlcpy(dst, str, 20);
    ft_strlcpy(dst1, str, 20);
    printf("%s\n", dst);
    printf("%s\n", dst1);
    printf("%d %s\n", ft_strlcat(dst, src, 20), dst);
    printf("%d %s\n", ft_strlcat(dst1, src, 20), dst1);
}