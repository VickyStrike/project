/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:14:28 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 18:23:44 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			resolve(char *str, int pos)
{
	char	test;

	if (pos == 81)
		return (TRUE);
	if (str[pos] != '.')
		return (resolve(str, pos + 1));
	test = '1';
	while (test <= '9')
	{
		if (is_valide(str, pos, test))
		{
			str[pos] = test;
			if (resolve(str, pos + 1) == TRUE)
				return (TRUE);
		}
		test++;
	}
	str[pos] = '.';
	return (FALSE);
}
