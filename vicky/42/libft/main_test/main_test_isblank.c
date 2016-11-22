#include "libft.h"

int     main(void)
{
    char    str[] = "oto sma \n 14 \t a7458 j(-è       ";
    int     i;

    i = 0;
    while (str[i])
    {
        if (ft_isblank(str[i]))
            printf("[%c] = BLANC\n", str[i]);
        else
            printf("[%c] = autre\n", str[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (str[i])
    {
        if (isblank(str[i]))
            printf("[%c] = BLANC\n", str[i]);
        else
            printf("[%c] = autre\n", str[i]);
        i++;
    }
    return (0);
}
