#include "libft.h"

char        *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (ft_strlen(src) < n)
        ft_bzero(dest + i, n - i);
    return (dest);
}
