#include "libft.h"

char        tab[] = "toto tata tutu";

static char             tomaj(char c)
{
    static size_t       i;

    if (i == (strlen(tab)))
    {
        printf("Erreur len\n");
        return (-1);
    }

    if (c != tab[i])
    {
        printf("Erreur tab\n");
        return (-1);
    }

    if (c >= 'a' && c <= 'z')
    {
        c = c - ('a' - 'A');
    }
    i++;
    printf("[%zu]\n", i);
    return (c);
}

static void             put_mem(void *s, size_t n)
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

int                 main(void)
{
//    char            tab_1[] = "toto dans le bateau";
    char            tab_2[] = "toto tata tutu";
    int             i;
    char            *str;

    str = ft_strmap(tab, &tomaj);
    printf("Lancement put_mem 1\n");
    printf("%s\n", tab);
    printf("%s\n", str);
    put_mem(tab, strlen(tab));
    put_mem(str, strlen(str));


    i = 0;
    while (tab_2[i] != '\0')
    {
        tab_2[i] = toupper(tab_2[i]);
        i++;
    }
    put_mem(tab_2, strlen(tab_2));



    if (strcmp(str, tab_2))
        printf("FALSE\n");
    else
        printf("TRUE\n");

    free(str);
    return (0);    
}
