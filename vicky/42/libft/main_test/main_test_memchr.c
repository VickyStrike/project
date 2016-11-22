#include "libft.h"

void			put_mem(void *s, size_t n)
{
	size_t		i;
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
	if ( cpy == NULL)
	{
		printf("NULL\n");
		return;
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

int			main(void)
{
	char		src[] = "Toto dans le bateau";
	char		*test;
	char		*test_2;

	test = ft_memchr(src, 'a', 80);
	put_mem(test, 20);

	test_2 = memchr(src, 'a', 65);
	put_mem(test_2, 20);

    printf("Test\n");

    if (test == NULL)
        return (-1);
	if(memcmp(test_2, test, 20))
		printf("FALSE\n");
	else
		printf("TRUE\n");

	return (0);
}
