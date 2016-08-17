/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:19:27 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 17:34:23 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


int			*ft_map(int *tab, int length, int(*f)(int));

int			ft_test(int nb)
{
	return (nb + 10);
}

int			main(void)
{
	int		tab[5] = {1, 2, 3, 4, 5};
	int		*str;
	int		i;

	if ((str = ft_map(tab, 5, &ft_test)) == NULL)
		return (ft_puterr("Erreur malloc\n"));
	i = 0;
	while (i < 5)
	{
		printf("[%d] ,\n", str[i]);
		i++;
	}
	free(str);
	str = NULL;
	return (0);
}
