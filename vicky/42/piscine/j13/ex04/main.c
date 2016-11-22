/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:06:49 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/01 13:43:33 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_btree.h"

int				btree_cmp(void *item_root, void *item_tree)
{
	if ((*((char *)item_root)) <= (*(char *)item_tree))
		return (1);
	return (-1);
}

void			ft_putbtree(void *item)
{
	ft_putstr((char *)item);
	ft_putchar('\n');
	return ;
}

int				main(void)
{
	t_btree		*tree;

	btree_insert_data(&tree, (char *)"z", btree_cmp);
	btree_insert_data(&tree, (char *)"g", btree_cmp);
	btree_insert_data(&tree, (char *)"a", btree_cmp);
	btree_insert_data(&tree, (char *)"d", btree_cmp);
	btree_insert_data(&tree, (char *)"z", btree_cmp);
	btree_insert_data(&tree, (char *)"k", btree_cmp);
	btree_insert_data(&tree, (char *)"a", btree_cmp);
	btree_insert_data(&tree, (char *)"c", btree_cmp);
	btree_insert_data(&tree, (char *)"s", btree_cmp);
	btree_insert_data(&tree, (char *)"m", btree_cmp);
	btree_insert_data(&tree, (char *)"h", btree_cmp);
	btree_insert_data(&tree, (char *)"t", btree_cmp);
	btree_insert_data(&tree, (char *)"i", btree_cmp);
	ft_putstr("--------------------------------------------------------------------\n");
	btree_apply_prefix(tree, ft_putbtree);
	ft_putstr("--------------------------------------------------------------------\n");
	btree_apply_suffix(tree, ft_putbtree);
	ft_putstr("--------------------------------------------------------------------\n");
	btree_apply_infix(tree, ft_putbtree);
	ft_putstr("--------------------------------------------------------------------\n");
	free(tree);
	tree = NULL;
	return (0);
}
