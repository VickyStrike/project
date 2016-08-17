/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 22:28:47 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

int			main(void)
{
	char	*str;
	int		coord[2];
	int		check[5];
	int		nb;

	coord[0] = 0;
	coord[1] = 0;
	if ((str = ft_read()) == NULL)
	{
		ft_putstr("ERREUR ERADICATION DES HUMAINS !\n");
		return (-1);
	}
	if (!(nb = ft_count(str, coord)))
	{
		ft_putstr("aucune\n");
		return (-1);
	}
	ft_check_colle(str, coord, check);
	free(str);
	str = NULL;
	ft_print_colle(coord, check);
	ft_putchar('\n');
	return (0);
}
