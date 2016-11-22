/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 22:18:19 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			main(void)
{
	t_list	*list;
	t_list	*tmp;

	list = NULL;
	ft_list_push_back(&list, "tata, ");
	ft_list_push_back(&list, "titi, ");
	ft_list_push_back(&list, "toto, ");
	ft_list_push_back(&list, "tutut.\n");
	ft_putstr_list(list);
	if (!(tmp = ft_list_at(list, 1)))
		return (printf("erreur\n"));
	printf("%s\n", (char *)tmp->data);
	return (0);
}
