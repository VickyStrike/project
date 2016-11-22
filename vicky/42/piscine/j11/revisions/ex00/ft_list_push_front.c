/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:46:18 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 13:52:35 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		tmp;

	if (!(tmp = ft_create_elem(data)))
		return ;
	tmp->next = *begin_list;
	*begin_list = tmp;
	return ;
}
