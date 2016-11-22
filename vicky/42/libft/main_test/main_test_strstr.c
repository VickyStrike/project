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

int                 main(void)
{
    char            s_1[] = "toto";
    char            s_2[] = "tata totO tutu totoo Toto dans l'titi";
    char            *str;
    char            s_3[] = "toto";
    char            s_4[] = "tata totO tutu totoo Toto dans l'titi";
    char            *str_2;
    

    str = ft_strstr(s_2, s_1);
//    put_mem(str, strlen(str));
    printf("[%s]\n", str);

    str_2 = strstr(s_4, s_3);
//    put_mem(str_2, strlen(str_2));
    printf("[%s]\n", str_2);


/*    if (memcmp(str, str_2, 30))
        printf("FALSE\n");
    else
        printf("TRUE\n");

*/    return (0);    
}
