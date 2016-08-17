/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:50:30 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/01 13:06:00 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

void			btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree		*tree;

	tree = btree_create_node(item);
	if ((*root) == NULL)
	{
		(*root) = tree;
		return ;
	}
	if (cmpf((*root)->item, tree->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
	return ;
}
