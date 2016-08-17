/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 12:57:08 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/09 13:15:00 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_bzero(void *area, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		((char *)area)[i] = '\0';
		i++;
	}
	return ;
}