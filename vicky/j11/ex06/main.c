/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 21:57:49 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			main(void)
{
	t_list	*list;

	list = NULL;
	list = ft_create_elem("tata, ");
	ft_list_push_back(&list, "titi, ");
	ft_list_push_back(&list, "toto, ");
	ft_list_push_back(&list, "tutut.\n");
	ft_putstr_list(list);
	while (list != NULL)
	{
		printf("%p\n", list);
		list = list->next;
	}
	ft_list_clear(&list);
	printf("%p\n", list);
	return (0);
}
