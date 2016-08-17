/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_resolve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:51:35 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 20:28:47 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			r_resolve(char *str, int pos)
{
	char	test;

	if (pos == -1)
		return (TRUE);
	if (str[pos] != '.')
		return (r_resolve(str, pos - 1));
	test = '9';
	while (test >= '1')
	{
		if (is_valide(str, pos, test))
		{
			str[pos] = test;
			if (r_resolve(str, pos - 1) == TRUE)
				return (TRUE);
		}
		test--;
	}
	str[pos] = '.';
	return (FALSE);
}
