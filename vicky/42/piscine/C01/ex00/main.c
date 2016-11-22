/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 16:01:36 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 20:38:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

static int	error(void)
{
	ft_putstr("Erreur\n");
	return (FAILURE);
}

int			main(int ac, char **av)
{
	char	str[82];
	char	r_str[82];

	if (is_arg_error(ac, av) == TRUE)
		return (error());
	str[81] = '\0';
	make_str(ac, av, str);
	make_str(ac, av, r_str);
	if (resolve(str, 0))
	{
		r_resolve(r_str, 81);
		if (!ft_strcmp(str, r_str))
			put_sudoku(str);
		else
			return (error());
	}
	else
		return (error());
	return (SUCCESS);
}
