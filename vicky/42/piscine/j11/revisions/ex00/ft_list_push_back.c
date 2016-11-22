/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:35:21 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 15:26:52 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*tmp;
	t_list		*cpy;

	if (!(tmp = ft_create_elem(data)))
		return ;
	if ((*begin_list) == NULL)
	{
		*begin_list = tmp;
		return ;
	}
	cpy = *begin_list;
	while (cpy->next != NULL)
	{
		cpy = cpy->next;
	}
	cpy->next = tmp;
	return ;
}
