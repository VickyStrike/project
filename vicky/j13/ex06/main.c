/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:06:49 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/03 12:27:25 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_btree.h"

int				btree_cmp(void *item_root, void *item_tree)
{
	if (*(char *)item_root < *(char *)item_tree)
		return (1);
	if (*(char *)item_root > *(char *)item_tree)
		return (-1);
	return (0);
}

void			ft_putbtree(void *item)
{
	if (item != NULL)
		ft_putstr((char *)item);
	else
		ft_putstr("NULL");
	ft_putchar('\n');
	return ;
}

int				main(void)
{
	t_btree		*tree;

	tree = NULL;
	btree_insert_data(&tree, (char *)"k", btree_cmp);
	btree_insert_data(&tree, (char *)"a", btree_cmp);
	btree_insert_data(&tree, (char *)"c", btree_cmp);
	btree_insert_data(&tree, (char *)"s", btree_cmp);
	btree_insert_data(&tree, (char *)"m", btree_cmp);
	btree_insert_data(&tree, (char *)"h", btree_cmp);
	btree_insert_data(&tree, (char *)"t", btree_cmp);
	btree_insert_data(&tree, (char *)"i", btree_cmp);
	ft_btreeput(tree, ft_putbtree, 0);
	ft_putnbr(btree_level_count(tree));
	ft_putchar('\n');
	free(tree);
	tree = NULL;
	return (0);
}
