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
	char		dest[10];
	char		cpy_tab[10];
	char		*s_dest;
	char		*cpy_dest;
	char		*test;
	char		*test_2;
	
	s_dest = dest;
	cpy_dest = cpy_tab;
	
	bzero(s_dest, 10);
	bzero(cpy_dest, 10);
	printf("%s\n", src);

	test = ft_memccpy(s_dest, src, 'b', 8);
	put_mem(test, 10);
	put_mem(s_dest, 10);

	test_2 = memccpy(cpy_dest, src, 'b', 8);
	put_mem(test_2, 10);
	put_mem(cpy_dest, 10);

	if(memcmp(cpy_dest, s_dest, 10))
		printf("FALSE\n");
	else
		printf("TRUE\n");

	return (0);
}
