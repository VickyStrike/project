/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 14:24:37 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 15:49:59 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_putstr_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr((char *)list->data);
		list = list->next;
	}
	return ;	
}
