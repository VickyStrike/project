/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:46:42 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 17:54:39 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_any(char **tab, int(*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}