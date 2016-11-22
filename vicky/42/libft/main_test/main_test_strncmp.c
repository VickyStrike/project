#include "libft.h"

int         main(void)
{
    char    s1[] = "Toto tata dans tutu";
    char    s2[] = "Toto tata dans tutu";

    printf("[%d]\n", ft_strncmp(s1, s2, 25));
    printf("[%d]\n", strncmp(s1, s2, 25));
    if (strncmp(s1, s2, (strlen(s1))) != ft_strncmp(s1, s2, strlen(s1)))
        printf("FALSE\n");
    else
        printf("TRUE\n");

    return (0);
}
