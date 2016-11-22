#include "libft.h"

int     main(void)
{
    char    tab[] = "";
    int     len;
    int     len_2;

    len = ft_strlen(tab);
    printf("%d\n", len);

    len_2 = strlen(tab);
    printf("%d\n", len_2);

    if (len != len_2)
        printf("FALSE\n");
    else
        printf("TRUE\n");

    return (0);
}
