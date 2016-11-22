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

    mem_1 = ft_memalloc(0 * (sizeof(int)));
    put_mem(mem_1, sizeof(int) * 0);

    mem_2 = calloc(sizeof(int), 0);
    put_mem(mem_2, sizeof(int) * 0);


/*    if (memcmp(mem_1, mem_2, sizeof(int) * 15))
        printf("FALSE\n");
    else
        printf("TRUE\n");

*/
    free(mem_1);
    free(mem_2);
    return (0);    
}
