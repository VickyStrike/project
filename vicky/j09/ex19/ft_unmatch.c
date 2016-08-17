/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 11:38:48 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 11:47:58 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int	ft_occurence(int *tab, int val, int len)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (i < len)
	{
		if (val == tab[i])
			nb++;
		i++;
	}
	return (nb);
}

int			ft_unmatch(int *tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		if ((ft_occurence(tab, tab[i], length) % 2) != 0)
			return (tab[i]);
		i++;
	}
	return (0);
}
