
#include <stdio.h>

void		draw_square(int square)
{
	int	i;
	int	j;

	i = 0;
	while (i < square)
	{
		j = 0;
		while (j < square)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return ;
}

int		main(void)
{
	int	square;

	while (scanf("%d", &square) == 1)
	{
		draw_square(square);
		printf("\n");
	}

	return (0);
}
