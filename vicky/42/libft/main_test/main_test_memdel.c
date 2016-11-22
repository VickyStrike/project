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
    void            *mem_1;
    void            *mem_2;

    mem_1 = ft_memalloc(5 * (sizeof(int)));
    mem_2 = mem_1;
    
    ft_memdel(&mem_1);
    put_mem(mem_1, sizeof(int) * 5);

    free(mem_2);
    return (0);    
}
