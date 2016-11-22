#include "libft.h"

char            *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char        *str;
    size_t      i;

    if (s == NULL)
        return (NULL);
    if ((str = ft_strnew(len)) == NULL)
        return (NULL);
    i = 0;
    while (s[start] != '\0' && i < len)
    {
        str[i] = s[start];
        start++;
        i++;
    }
    return (str);
}
