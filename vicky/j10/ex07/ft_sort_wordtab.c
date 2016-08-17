/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:06:15 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/24 18:32:19 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_sort_wordtab(char **tab)
{
	int		flag;
	int		i;

	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		i = 0;
		while (tab[i + 1] != NULL)
		{
			if ((ft_strcmp(tab[i], tab[i +1])) > 0)
			{
				flag = 1;
				ft_strswap(tab + i, tab + i + 1);
			}
			i++;
		}
	}
	return ;
}
