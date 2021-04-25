#include "libft.h"

/** The calloc() function allocates memory for an array of nmemb elements of size bytes each 
 * and returns a pointer to the allocated memory. The memory is set to zero. 
 * If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value 
 * that can later be successfully passed to free().
 **/

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t bytes;
    size_t i;
    void    *memory;

    bytes = nmemb * size;
    if (bytes)
    {
        memory = malloc(bytes);
        if (memory)
        {
            while (i < bytes)
            {
                ((char *)memory)[i] = 0;
                i++;
            }
        }
        return (memory);        
    }
    return (NULL);
}

#include <stdio.h>

int main()
{

    
}