/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:37:14 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 12:56:42 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_antidote(int i, int j, int k)
{
	int		flag;
	int		nb;
	int		tab[3];

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		nb = 0;
		while ((nb + 1) < 3)
		{
			if (tab[nb] > tab[nb + 1])
			{
				ft_swap(tab + nb, tab + (nb + 1));
				flag = 1;
			}
			nb++;
		}
	}
	return (tab[1]);
}
