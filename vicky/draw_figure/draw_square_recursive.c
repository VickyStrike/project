#include <stdio.h>

void		draw_line(int square, int index)
{
	printf("*");
	if (index != square)
	{
		draw_line(square, index + 1);
		printf("*");
	}
	if (!index)
		printf("\n");
	return ;
}

void		draw_square_recursive(int square, int index)
{
	draw_line(square, 0);
	if (index != square)
	{
		draw_square_recursive(square, index + 1);
		draw_line(square, 0);
	}
	return ;
}

int		main(void)
{
	int	square;

	while (scanf("%d", &square) == 1)
	{
		draw_square_recursive(square / 2, 0);
		printf("\n");
	}
	return (0);
}
