/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:00:36 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 17:33:10 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str[3];

	str[0] = "president";
	str[1] = "attentat";
	str[2] = "bauer";
	i = 1;
	while (i < ac)
	{
		j = 0;
		av[i] = ft_strdelspace(ft_strlowcase(av[i]));
		while (j < 3)
		{
			if (ft_strcmp(av[i], str[j]) == 0)
				return (ft_puterr("Alert!!!\n"));
			j++;
		}
		i++;
	}
	return (0);
}
