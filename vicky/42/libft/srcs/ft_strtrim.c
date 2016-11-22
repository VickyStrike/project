#include "libft.h"

char        *ft_strtrim(char const *s)
{
    int     start;
    int     i;

    if (s == NULL)
        return (NULL);

    start = 0;

    while (s[start])
    {
        if (ft_isblank(s[start]))
           start++;
        else
            break;
    }

    i = (int)ft_strlen(s);
    while (ft_isblank(s[i]))
        i--;

    printf("\nstart = [%d] len = [%d] i = [%d]\n", start, ft_strlen(s), i);
    return (ft_strsub(s, start, i - start));
}
