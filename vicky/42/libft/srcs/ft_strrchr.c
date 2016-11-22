#include "libft.h"

char        *ft_strrchr(const char *s, int c)
{
    int     i;
    int     occ;

    if (c == '\0')
        return ((char *)s + ft_strlen(s));
    i = 0;
    occ = -1;
    while (s[i])
    {
        if (s[i] == c)
            occ = i;
        i++;
    }
    return (occ >= 0 ? ((char *)s + occ) : NULL);
}
