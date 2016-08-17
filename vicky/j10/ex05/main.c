/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:40:23 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 18:12:39 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_is_sort(int *tab, int length, int(*f)(int, int));

int			ft_test(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	return (1);
}

int			main(void)
{
	int		tab[5] = {1, 2, 4, 3, 5};
	int		tab1[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int		tab2[5] = {1, 2, 3, 3, 5};
	
	printf("%d\n", ft_is_sort(tab, 5, &ft_test));
	printf("%d\n", ft_is_sort(tab1, 12, &ft_test));
	printf("%d\n", ft_is_sort(tab2, 5, &ft_test));
	return (0);
}
