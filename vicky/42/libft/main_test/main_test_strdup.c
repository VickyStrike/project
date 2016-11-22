#include "libft.h"

int     main(void)
{
    char    *str;
    char    s1[] = "Toto dans le bateau";
    char    s2[] = "Toto dans le bateau";
    char    *str2;

    str = strdup(s1);

    str2 = ft_strdup(s2);
    
    if (strcmp(str, str2))
        printf("FALSE\n");
    else
        printf("TRUE\n");
    return (0);
}
