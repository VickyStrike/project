#include "libft.h"

char                *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
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
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}
