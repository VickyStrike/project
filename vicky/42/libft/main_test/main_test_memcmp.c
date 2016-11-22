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
	int 		src[] = {1, 2, 3687, 4, 5, 6};
	int 		dest[] = {1, 2, -98653, 4, 5, 6};
    int         ret;
    int         ret_2;

//  printf("%s\n", src);
//	printf("%s\n", dest);

	ret_2 = memcmp(dest, src, 6 * sizeof(int));
	printf("%d\n", ret_2);

	ret = ft_memcmp(dest, src, 6 * sizeof(int));
	printf("%d\n", ret);


    if (ret != ret_2)
        printf("FALSE\n");
    else
        printf("TRUE\n");

	return (0);
}
