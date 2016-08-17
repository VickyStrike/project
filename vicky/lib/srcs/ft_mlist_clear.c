/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 20:17:37 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 13:54:54 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void			ft_mlist_clear(t_list **begin_list)
{
	t_list		*cpy;

	if ((*begin_list) == NULL)
		return ;
	free((*begin_list)->data);
	(*begin_list)->data = NULL;
	cpy = (*begin_list)->next;
	free(*begin_list);
	*begin_list = NULL;
	ft_mlist_clear(&cpy);
	return ;
}
