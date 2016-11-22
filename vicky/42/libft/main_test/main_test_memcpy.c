#include "libft.h"

void			put_mem(void *s, size_t n)
{
	size_t		i;
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
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
	char		src[20] = "Toto dans le bateau";
	char		dest[10];
	char		*s_dest;
	char		*cpy_dest;
	
	s_dest = dest;
	cpy_dest = dest;
	
	printf("%s\n", src);

	ft_memcpy(s_dest, src, 5);
	put_mem(s_dest, 10);

	memcpy(cpy_dest, src, 5);
	put_mem(cpy_dest, 10);

	if(memcmp(cpy_dest, s_dest, 10))
		printf("FALSE\n");
	else
		printf("TRUE\n");

	return (0);
}
