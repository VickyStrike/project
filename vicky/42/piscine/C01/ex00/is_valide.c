/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:42:42 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 19:36:56 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

static int	is_lfree(char *str, int x, char test)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (eval(str, x, i) == test)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static int	is_cfree(char *str, int y, char test)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (eval(str, i, y) == test)
			return ( FALSE);
		i++;
	}
	return (TRUE);
}

static int	is_bfree(char *str, int x, int y, char test)
{
	int		i;
	int		j;

	i = x - (x % 3);
	j = y - (y % 3);
	x = i;
	while (x < i + 3)
	{
		y = j;
		while (y < j + 3)
		{
			if (eval(str, x, y) == test)
				return (FALSE);
			y++;
		}
		x++;
	}
	return (TRUE);
}

int			is_valide(char *str, int pos, char test)
{
	int		x;
	int		y;

	pos_to_index(pos, &x, &y);
	if (is_lfree(str, x, test) == FALSE)
		return (FALSE);
	if (is_cfree(str, y, test) == FALSE)
		return (FALSE);
	if (is_bfree(str, x, y, test) == FALSE)
		return (FALSE);
	return (TRUE);
}
