/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_pdata.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:53:36 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 15:09:20 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_show_pdata(t_list *list)
{
	while (list != NULL)
	{
		printf("%p\n", list->data);
		list = list->next;
	}
	return ;
}

void			ft_r_show_pdata(t_list *list)
{
	if (list == NULL)
		return ;
	printf("%p\n", list->data);
	ft_r_show_pdata(list->next);
}
