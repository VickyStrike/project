#include "libft.h"

int         ft_tolower(int c)
{
    return (ft_isupper(c) ? (c + ('a' - 'A')) : c);
}
