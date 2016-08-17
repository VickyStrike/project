/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 13:57:01 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 14:13:16 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	if ((stock = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	stock[ac].str = NULL;
	i = 0;
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		if ((stock[i].copy = ft_strdup(av[i])) == NULL)
			return (NULL);
		if ((stock[i].tab = ft_split_whitespaces(av[i])) == NULL)
			return (NULL);
		i++;
	}
	return (stock);
}
