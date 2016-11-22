#include "libft.h"

void			put_mem(void *s, size_t n)
{
	size_t		i;
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
    if (cpy == NULL)
    {
        printf("NULL\n");
        return ;
    }
	i = 0;
	while (i < n)
	{
		printf("[%#.2X]", (int)cpy[i]);
		i++;
	}
	printf("\n");
	return ;
}

int	    		main(void)
{
	char		tab[35] = "Toto dans le bateau";
	char		tab_2[35] = "Toto dans le bateau";
    char        *src;
    char        *src_2;
	char		*s_dest;
	char		*cpy_dest;
	char		*test;
	char		*test_2;
	
    src = tab;
    src_2 = tab_2;

	s_dest = tab + 3;
	cpy_dest = tab_2 + 3;
	
	test = ft_memmove(s_dest, src, 18);
	printf("%s\n", tab);
	put_mem(tab, 35);
	put_mem(test, 32);

	test_2 = memmove(cpy_dest, src_2, 18);
	printf("%s\n", tab_2);
	put_mem(tab, 35);
	put_mem(test_2, 32);

	if(memcmp(tab, tab_2, 35))
		printf("FALSE\n");
	else
		printf("TRUE\n");

	return (0);
}
