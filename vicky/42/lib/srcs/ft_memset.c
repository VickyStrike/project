/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memeset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:11:41 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/09 13:14:58 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_memset(void *area, int len, char c)
{
	int		i;

	i = 0;
	while (i < len)
	{
		((char *)area)[i] = c;
		i++;
	}
	return ;
}
