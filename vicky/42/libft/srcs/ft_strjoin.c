#include "libft.h"

char        *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    str = ft_memalloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
    if (str == NULL)
        return (NULL);
    return (ft_strcat(ft_strcpy(str, s1), s2));
}
