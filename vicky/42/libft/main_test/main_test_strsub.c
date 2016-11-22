#include "libft.h"

int         main(void)
{
    char    s1[] = "Toto dans le bateau.";
    char    *str;

    str = ft_strsub(s1, 1, 9);
    printf("Retour sub\n");
    if (str == NULL)
    {
        printf ("NULL");
        return (-1);
    }
    printf("[%s]\n", str);
    return (0);
}
