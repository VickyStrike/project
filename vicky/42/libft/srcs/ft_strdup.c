#include "libft.h"

char        *ft_strdup(const char *s)
{
    char    *str;

    if ((str = (ft_strnew(ft_strlen(s)))) == NULL)
        return (NULL);
    return (ft_strcpy(str, s));
}
