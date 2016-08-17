/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:11:02 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/03 11:28:56 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

int				btree_level_count(t_btree *root)
{
	int			i;
	int			j;

	if (root == NULL)
		return (0);
	i = btree_level_count(root->left);
	j = btree_level_count(root->right);
	return ((i < j ? j : i) + 1);
}
