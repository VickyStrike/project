#include "libft.h"

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  len_l;

    if (!(len_l = ft_strlen(little)))
        return ((char *)big);
    i = 0;
    while (big[i] && (len - i) >= len_l && i < len)
    {
        if (big[i] == little[0])
        {
            if (!(ft_strncmp(big + i, little, len_l)))
                return ((char *)big + i);
        }
        i++;
    }
    return (NULL);
}
