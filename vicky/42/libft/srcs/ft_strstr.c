#include "libft.h"

char        *ft_strstr(const char *haystack, const char *needle)
{
    int     i;

    if (!(ft_strlen(needle)))
        return ((char *)haystack);
    i = 0;
    while (haystack[i])
    {
        if (haystack[i] == needle[0])
        {
            if (!(ft_strncmp(haystack + i, needle, ft_strlen(needle))))
                return ((char *)haystack + i);
        }
        i++;
    }
    return (NULL);
}
