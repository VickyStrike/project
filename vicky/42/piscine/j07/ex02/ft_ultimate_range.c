/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:07:27 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/20 15:31:00 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (max == min)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int			ft_ultimate_range(int **range, int min, int max)
{
	if (range == NULL)
	{
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		return (0);
	}
	return (max - min);
}
