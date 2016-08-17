/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 13:02:24 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/24 19:54:04 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void			ft_do_op(char **av)
{
	int			a;
	int			b;
	int			i;

	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(av[2], gl_opptab[i].key) == 0)
		{
			gl_opptab[i].val(a, b);
			ft_putchar('\n');
			return ;
		}
		i++;
	}
	ft_usage(a, b);
	return ;
}
