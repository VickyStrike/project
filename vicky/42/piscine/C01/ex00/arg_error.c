/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:27:18 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 21:02:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_arg_error(int ac, char **av)
{
	int	i;
	int j;

	i = 1;
	if (ac != 10)
		return (TRUE);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (!(av[i][j] == '.' || (av[i][j] <= '9' && av[i][j] >= '1')))
				return (TRUE);
			j++;
		}
		if (j != 9)
			return (TRUE);
		i++;
	}
	return (FALSE);
}
