#include "libft.h"

int         main(void)
{
    char    s[] = "too1 5 4 8ToO899 tTTTTOOooo";
    int     i;

    i = 0;
    while (s[i])
    {
        if (!(ft_islower(s[i])))
            printf("[%c] est un caractere MAJ.\n ", s[i]);
        else
            printf("[%c] est un caractere minuscule.\n ", s[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        if (!(islower(s[i])))
            printf("[%c] est un caractere MAJ.\n", s[i]);
        else
            printf("[%c] est un caractere minuscule.\n", s[i]);
        i++;
    }
    return (0);
}
