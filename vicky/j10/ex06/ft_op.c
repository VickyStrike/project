/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 00:13:14 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/24 14:17:18 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void		ft_add(int a, int b)
{
	ft_putnbr(a + b);
	return ;
}

void		ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	return ;
}

void		ft_mult(int a, int b)
{
	ft_putnbr(a * b);
	return ;
}

void		ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop ; CREATION NOUVELLE FAILLE TEMPORELLE DANS 3..2..1 !\n");
		return ;
	}
	ft_putnbr(a / b);
	return ;
}

void		ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop ; CREATION NOUVELLE MATRICE DANS 3..2..1 !\n");
		return ;
	}
	ft_putnbr(a % b);
	return ;
}
