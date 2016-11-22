/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 15:09:27 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 15:39:05 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			main(int ac, char **av)
{
	t_list	*list;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_back(&list, av[i]);
		i++;
	}
	return (0);
}
