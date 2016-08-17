/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:13:53 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 20:42:13 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void			ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*tmp;
	t_list		*new_elem;
	
	new_elem = ft_create_elem(data);
	if ((*begin_list) == NULL)
	{
		*begin_list = new_elem;
		return ;
	}
	tmp = *begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_elem;
	return ;
}
