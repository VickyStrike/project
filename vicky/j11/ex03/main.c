/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/25 13:58:55 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			main(int ac, char **av)
{
	t_list	*list;
	char	str[] = "tata";
	char	str1[] = "toto";
	char	str2[] = "titi";

	list = NULL;
	ft_list_push_front(&list, str);
	ft_list_push_front(&list, str1);
	ft_list_push_front(&list, str2);
	printf("%d\n", ft_list_size(list));
	while (list != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	return (0);
	(void)ac;
	(void)av;
}
