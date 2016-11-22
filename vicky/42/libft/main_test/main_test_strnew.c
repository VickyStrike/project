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
    char            *mem_1;
    char            *mem_2;

    mem_1 = ft_strnew((sizeof(char) * 1));
    put_mem(mem_1, sizeof(char) * 2);

    mem_2 = calloc(sizeof(char), 2);
    put_mem(mem_2, sizeof(char) * 2);


    if (memcmp(mem_1, mem_2, sizeof(char) * 2))
        printf("FALSE\n");
    else
        printf("TRUE\n");
    
    free(mem_1);
    free(mem_2);

    return (0);    
}
