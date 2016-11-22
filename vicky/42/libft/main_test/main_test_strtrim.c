#include "libft.h"

int         main(void)
{
    char    s[] = "    \ndans le bateau   \n\t   ";
    char    s2[] = "    dans le bateau      ";
    char    *str;
    char    *str2;

    printf("[%s]\n", s);
    str = ft_strtrim(s);
    printf("[%s]\n", str);

    printf("[%s]\n", s2);
    str2 = ft_strtrim(s2);
    printf("[%s]\n", str2);

    free(str);
    free(str2);
    return (0);
}
