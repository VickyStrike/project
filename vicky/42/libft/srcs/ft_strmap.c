#include "libft.h"

char                *ft_strmap(char const *s, char (*f)(char))
{
    int             i;
    char            *str;


    if (f == NULL)
        return (NULL);
    if (s == NULL)
        return (NULL);
    if ((str = ft_strnew(strlen(s))) == NULL)
        return (NULL);

    i = 0;
    while (s[i] != '\0')
    {
        str[i] = f(s[i]);
        i++;
    }
    return (str);
}
