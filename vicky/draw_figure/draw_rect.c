#include <stdio.h>

void		draw_rect(int h, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < l)
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
	int	h;
	int	l;

	while (scanf("%d%d", &h, &l) == 2)
	{
		draw_rect(h, l);
	}
	return (0);
}
