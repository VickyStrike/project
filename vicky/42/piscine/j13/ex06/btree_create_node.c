/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:02:31 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/01 12:43:38 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

t_btree				*btree_create_node(void *item)
{
	t_btree			*tmp;

	if (!(tmp = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	tmp->item = item;
	tmp->left = NULL;
	tmp->right = NULL;
	return (tmp);
}
