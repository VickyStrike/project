/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:53:44 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 20:42:48 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void			ft_list_clear(t_list **begin_list)
{
	t_list		*cpy;

	if ((*begin_list) == NULL)
		return ;
	cpy = (*begin_list)->next;
	free(*begin_list);
	*begin_list = NULL;
	ft_list_clear(&cpy);
	return ;
}
