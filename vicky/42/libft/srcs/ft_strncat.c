#include "libft.h"

char            *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t      i;
    int         len;

    len = ft_strlen(dest);
    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
