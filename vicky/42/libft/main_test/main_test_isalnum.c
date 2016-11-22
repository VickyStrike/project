#include "libft.h"

int         main(void)
{
    char    s[] = "-To/15 78    O)t=à_ç é45/ o+oo";
    int     i;

    i = 0;
    while (s[i])
    {
        if (!(ft_isalnum(s[i])))
            printf("\t[%c] n'est pas une lettre.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    printf("\n");

    i = 0;
    while (s[i])
    {
        if (!(isalnum(s[i])))
            printf("\t[%c] n'est pas une lettre.\n ", s[i]);
        else
            printf("\t[%c] OK.\n ", s[i]);
        i++;
    }
    return (0);
}
