#include "libft.h"

int         main(void)
{
    char    s[] = "too To15 78 OtTT8 TTOO4 ooo";
    int     i;

    i = 0;
    while (s[i])
    {
        if (!(ft_isdigit(s[i])))
            printf("\t[%c] FALSE.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        if (!(isdigit(s[i])))
            printf("\t[%c] FALSE.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    return (0);
}
