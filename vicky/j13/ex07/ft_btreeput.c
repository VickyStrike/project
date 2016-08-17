/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:31:11 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/03 12:19:38 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"
#define DATA_SIZE 3

static void		ft_putpad(int nb)
{
	char		*tab;
	int			x;
	int			y;
	int			i;

	tab = "          ";
	x = nb / 10;
	y = nb % 10;
	i = 0;
	while (i < x)
	{
		ft_putstr(tab);
		i++;
	}
	write(1, tab, y);
	return ;
}

void			ft_btreeput(t_btree *root, void (*putf)(void *), int call)
{
	int			nb;

	nb = (DATA_SIZE * call) + 1;
	if (root == NULL)
	{
		ft_putpad(nb);
		ft_putstr(".\n");
		return ;
	}
	ft_btreeput(root->left, putf, call + 1);
	ft_putpad(nb);
	putf(root->item);
	putchar('\n');
	ft_btreeput(root->right, putf, call + 1);
	return ;
}
