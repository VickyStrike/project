/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:36:58 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 21:44:57 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

static void		draw_line(int x, char *set, char *str)
{
	int			i;

	i = 0;
	while (i < x)
	{
		if ((!i) || i == (x - 1))
			str[i] = set[0];
		else
			str[i] = set[1];
		i++;
	}
	str[i] = '\n';
	return ;
}

void			ft_colle00(int *coord, char *str)
{
	int			i;

	i = 0;
	while (i < coord[1])
	{
		if ((!i) || i == (coord[1] - 1))
			draw_line(coord[0], "o-o", str + (i * (coord[0] + 1)));
		else
			draw_line(coord[0], "| |", str + (i * (coord[0] + 1)));
		i++;
	}
	return ;
}
