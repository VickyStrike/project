/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:59:46 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/03 12:18:25 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# define DATA_SIZE 3

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

t_btree					*btree_create_node(void *item);
void					btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void					btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void					btree_apply_infix(t_btree *root, void (*applyf)(void *));
void					btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void					*btree_search_item(t_btree *root, void *item_ref, int (*cmpf)(void *, void *));
int						btree_level_count(t_btree *root);
void					ft_btreeput(t_btree *root, void (*putf)(void *), int call);

#endif
