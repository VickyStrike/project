#include "libft.h"

void               put_mem(void *s, size_t n)
{
    unsigned char *str;
    size_t        i;

    if (s == NULL)
    {
        printf("NULL\n");
        return;
    }

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        printf("[%#.2hhX] ", str[i]);
        i++;
    }
    printf("\n");
    return ;
}
int         main(void)
{
    char    tab[] = "Toto dans le bateau.";
    char    str[] = "Toto dans le bateau.";

    ft_strclr(tab);
    put_mem(tab, 21);

    ft_bzero(str, strlen(str));
    put_mem(str, 21);

    if (strcmp(tab, str))
        printf("FALSE\n");
    else
        printf("TRUE\n");
    return (0);
}
