/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:54:19 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/01 14:32:20 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

void			*btree_search_item(t_btree *root, void *item_ref, int (*cmpf)(void *, void *))
{
	void		*tmp;

	if (root == NULL)
		return (NULL);
	tmp = btree_search_item(root->left, item_ref, cmpf);
	if (tmp != NULL)
		return (tmp);		
	if (!cmpf(root->item, item_ref))
		return (root->item);
	return (btree_search_item(root->right, item_ref, cmpf));
}

