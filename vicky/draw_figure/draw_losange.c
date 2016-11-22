#include <stdio.h>

void		draw_symb(int losange, int symb)
{
	int	i;
	i = 0;

	if (symb % 2 == 0)
	{
		while (i < symb / 2)
		{
			printf(".");
			i++;
		}
	}
	else
	{
		while (i < symb)
		{
			printf("*");
			i++;
		}
	}
	return ;
}

void		draw_losange(int losange, int flag)
{
	int	i;
	int	etoile;
	int	point;

	etoile = 1;
	i = 0;
	while (i < losange)
	{
		if (etoile == losange)
		{
			draw_symb(losange, etoile);
			printf("\n");
			flag = 1;
		}
		else
		{
			point = losange - etoile;
			draw_symb(losange, point);
			draw_symb(losange, etoile);
			draw_symb(losange, point);
			printf("\n");
		}
		i++;
		etoile = etoile + (flag ? -2 : 2);
	}
	return ;
}

int		main(void)
{
	int	losange;

	while (scanf("%d", &losange) == 1)
	{
		draw_losange(losange, 0);
		printf("\n");
	}
	return (0);
}
