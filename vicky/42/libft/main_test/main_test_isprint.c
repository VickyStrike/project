#include "libft.h"

int         main(void)
{
    printf("[%d] [%d]\n", ft_isprint(127), isprint(127));
    printf("[%d] [%d]\n", ft_isprint(2), isprint(2));
    printf("[%d] [%d]\n", ft_isprint(0), isprint(0));
    printf("[%d] [%d]\n", ft_isprint(128), isprint(128));
    printf("[%d] [%d]\n", ft_isprint(12), isprint(12));
    printf("[%d] [%d]\n", ft_isprint(27), isprint(27));
    printf("[%d] [%d]\n", ft_isprint(65), isprint(65));
    printf("[%d] [%d]\n", ft_isprint(-65), isprint(-65));
    printf("[%d] [%d]\n", ft_isprint(' '), isprint(' '));
    printf("[%d] [%d]\n", ft_isprint('~'), isprint('~'));

    return (0);
}
