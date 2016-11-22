/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:11:04 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/03 18:20:50 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

void			btree_apply_by_level(t_btree *root,\
				void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_list		*list;
	t_ltree		cpy;
	t_list		*tmp;

	list = NULL;
	cpy.node = root;
	cpy.level = 0;
	ft_mlist_push_back(&list, (void *)&cpy);
	while (list != NULL)
	{
		applyf(((t_ltree *)list->data)->node->item,\
				((t_ltree *)list->data)->node->level, is_first_elem);
		cpy.node = ((t_ltree *)list->data)->node->left;
		cpy.level = ((t_ltree *)list->data)->node->level + 1;
		ft_mlist_push_back(&list, (void *)&cpy);
		cpy.node = ((t_ltree *)list->data)->node->right;
		ft_mlist_push_back(&list, (void *)&cpy);
		tmp = list->next;
		free(list->data);
		free(list);
		list = tmp;
	}
}
