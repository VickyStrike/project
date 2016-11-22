
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		*get_tab(int nb_tab)
{
	int	*tab;

	if ((tab = (int *)calloc(sizeof(int), nb_tab)) == NULL)
		exit(-1);
	return (tab);	
}

char		***get_cells_tab(int nb)
{
	char	***tab;

	if ((tab = (char ***)calloc(sizeof(char**), nb)) == NULL)
		exit(-1);
	return (tab);
}

void		print_dico(int nb)
{
	printf("\nDico %d:\n", nb + 1);
	return ;
}

void		free_mem(char ***sup_tab, int *tab, int nb)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < tab[i])
		{
			free(sup_tab[i][j]);
			j++;
		}
		free(sup_tab[i]);
		i++;
	}
	free(tab);
	free(sup_tab);
	return ;
}

int		resolve(char ***sup_tab, int *tab, int nb, int cell, char *str)
{
	int	i;
	int	len;

	if ((cell == nb) || (*str == '\0'))
		return ((cell == nb) && (*str == '\0'));

	i = 0;
	while (i < tab[cell])
	{
		len = strlen(sup_tab[cell][i]);
		if ((strncmp(sup_tab[cell][i], str, len) == 0))
		{
			if((resolve(sup_tab, tab, nb, cell + 1, str + len)) != 0)
				return (1);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	int	nb;
	int	*tab;
	int	i;
	int	j;
	char	***sup_tab;
	int	nb_str;
	char	*str;

	scanf("%d",&nb);
	printf("%d\n", nb);
	tab = get_tab(nb);

	i = 0;
	while (i < nb)
	{
		if (scanf("%d", tab +i) != 1)
		{
			printf("exit.\n");
			return (-1);
		}
		printf("%d\n", tab[i]);
		i++;
	}

	sup_tab = get_cells_tab(nb);

	i = 0;
	while (i < nb)
	{
		if ((sup_tab[i] = (char **)calloc(sizeof(char *), tab[i])) == NULL)
			exit(-1);
		i++;
	}

	i = 0;
	while (i < nb)
	{
		j = 0;
		print_dico(i);
		while (j < tab[i])
		{
			scanf(" %m[^\n]", sup_tab[i] + j);
			printf("%s\n", sup_tab[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");

	scanf("%d", &nb_str);

	i = 0;
	while (i < nb_str)
	{
		if (scanf(" %m[^\n]", &str) != 1)
		{
			printf("Chaine vide ne correspond pas.\n");
			i++;
			continue ;
		}
		if (resolve(sup_tab, tab, nb, 0, str))
			printf("La phrase [%s] correspond aux cellules des tableaux.\n", str);
		else
			printf("La phrase [%s] ne correspond pas.\n", str);
		free(str);
		i++;
	}

	free_mem(sup_tab, tab, nb);

	return (0);
}
