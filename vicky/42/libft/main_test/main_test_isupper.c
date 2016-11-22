#include "libft.h"

int         main(void)
{
    char    s[] = "tooToOtTTTTOOooo";
    int     i;

    i = 0;
    while (s[i])
    {
        if (ft_isupper(s[i]))
            printf("[%c] est un caractere majuscule.\n ", s[i]);
        else
            printf("[%c] est un caractere minuscule.\n ", s[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        if (isupper(s[i]))
            printf("[%c] est un caractere majuscule.\n", s[i]);
        else
            printf("[%c] est un caractere minuscule.\n", s[i]);
        i++;
    }
    return (0);
}
