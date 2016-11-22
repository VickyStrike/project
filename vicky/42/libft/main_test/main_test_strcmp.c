#include "libft.h"

int         main(void)
{
    char    s1[] = "toto tata titi tutu";
    char    s2[] = "toti tata titi tutu";

    printf("[%d]\n", ft_strcmp(s1, s2));
    printf("[%d]\n", strcmp(s1, s2));
    if (strcmp(s1, s2) != ft_strcmp(s1, s2))
        printf("FALSE\n");
    else
        printf("TRUE\n");

    return (0);
}
