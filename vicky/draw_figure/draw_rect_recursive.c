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


void		draw_rect_recursive(int h, int l, int index)
{
	draw_line(l, 0);
	if (index != h)
	{
		draw_rect_recursive(h, l, index + 1);
		draw_line(l, 0);
	}
	return ;
}

int		main(void)
{
	int	h;
	int	l;

	while (scanf("%d%d", &h, &l) == 2)
	{
		draw_rect_recursive(h / 2, l / 2, 0);
	}
	return (0);
}
