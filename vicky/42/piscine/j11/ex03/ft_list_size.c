/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:44:01 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/25 13:56:57 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int				ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);

}
