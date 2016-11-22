#include "libft.h"
#include <string.h>

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

int		main(void)
{
	char	tab[20];
	char	*str;
	char	*s_str;
	char	s_tab[20];

	str = tab;

	ft_memset(str, 1, 20);
	ft_memset(str + 10, 2, 9);
	put_mem(str, 20);

	s_str = s_tab;
	memset(s_str, 1, 20);
	memset(s_str + 10, 2, 8);
	put_mem(s_str, 20);

	if (memcmp(s_str, str, 20))
		printf("FALSE\n");
	else
		printf("TRUE\n");


	return (0);
}
