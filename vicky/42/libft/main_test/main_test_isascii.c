#include "libft.h"

int         main(void)
{
    printf("[%d] [%d]\n", ft_isascii(127), isascii(127));
    printf("[%d] [%d]\n", ft_isascii(2), isascii(2));
    printf("[%d] [%d]\n", ft_isascii(0), isascii(0));
    printf("[%d] [%d]\n", ft_isascii(128), isascii(128));
    printf("[%d] [%d]\n", ft_isascii(12), isascii(12));
    printf("[%d] [%d]\n", ft_isascii(27), isascii(27));
    printf("[%d] [%d]\n", ft_isascii(65), isascii(65));
    printf("[%d] [%d]\n", ft_isascii(-65), isascii(-65));

    return (0);
}
