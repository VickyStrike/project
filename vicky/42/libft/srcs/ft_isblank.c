#include "libft.h"

int         ft_isblank(int c)
{
    if (c != ' ' && c != '\n' && c != '\t')
        return (0);
    return (1);
}
