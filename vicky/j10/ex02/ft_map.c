/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:19:20 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 17:31:49 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			*ft_map(int *tab, int length, int(*f)(int))
{
	int		*str;
	int		i;

	if ((str = (int *)malloc(sizeof(int) * length)) == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}


