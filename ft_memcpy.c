#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *source = (char *) src;
    char *dst = (char *) dest;
    
    i = 0;
    while (*source && i < n)
    {
        dst[i] = source[i]; 
        i++;
    }

    dest = dst;
    return dest;
}