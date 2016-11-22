#include "libft.h"

int         main(void)
{
    char    s1[] = "Toto dans le bateau";
    char    s2[30];
    char    s3[30];
    char    s4[30];
    char    *str;

    printf("[%s] [%s]\n", s1, ft_strcpy(s2, s1));

    printf("[%s] [%s]\n", s1, strcpy(s3, s1));

    str = ft_strcpy(s4, NULL);
    if (strcmp(s3, s2) && strlen(s3) != strlen(s2))
        printf("FALSE\n");
    else
        printf("TRUE\n");
    return (0);
}
