#include "libft.h"

int         main(void)
{
    char    s[] = "Toto dans l'eau";
    char    str[] = "Toto dans l'eau";
    char    s1[10];
    char    s2[10];
    char    *my;
    char    *sys;

    my = ft_strncpy(s1, s, 10);
    sys = strncpy(s2, str, 10);

    printf("[%s] [%s]\n", my, sys);

    if (memcmp(my, sys, 10))
        printf("FALSE\n");
    else
        printf("TRUE\n");
    return (0);
}
