/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 17:16:24 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 22:03:40 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

static void		draw_line(int x, char *set, char *str)
{
	int			i;

	i = 0;
	while (i < x)
	{
		if (!i)
			str[i] = set[0];
		else if (i == (x - 1))
			str[i] = set[2];
		else
			str[i] = set[1];
		i++;
	}
	str[i] = '\n';
	return ;
}

void			ft_colle02(int *coord, char *str)
{
	int			i;

	i = 0;
	while (i < coord[1])
	{
		if (!i)
			draw_line(coord[0], "ABA", str + (i * (coord[0] + 1))); 
		else if (i == (coord[1] - 1))
			draw_line(coord[0], "CBC", str + (i * (coord[0] + 1)));
		else
			draw_line(coord[0], "B B", str + (i * (coord[0] + 1)));
		i++;
	}
	return ;
}
