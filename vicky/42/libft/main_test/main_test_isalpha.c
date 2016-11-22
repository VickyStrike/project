#include "libft.h"

int         main(void)
{
    char    s[] = "too To15 78 OtTT8 TTOO4 ooo";
    int     i;

    i = 0;
    while (s[i])
    {
        if (!(ft_isalpha(s[i])))
            printf("\t[%c] n'est pas une lettre.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        if (!(isalpha(s[i])))
            printf("\t[%c] n'est pas une lettre.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    return (0);
}
