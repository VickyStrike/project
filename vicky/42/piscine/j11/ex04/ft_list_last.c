/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 14:04:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/25 14:10:10 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_last(t_list *begin_list)
{
	while (begin_list != NULL && begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
