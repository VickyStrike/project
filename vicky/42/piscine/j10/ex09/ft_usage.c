/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:12:24 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/24 19:55:04 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void		ft_usage(int a, int b)
{
	int		i;

	i = 0;
	ft_putstr("error : only [ ");
	while (i < 6)
	{
		ft_putstr(gl_opptab[i].key);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("] are accepted.\n");
	return ;
	(void)a;
	(void)b;
}
