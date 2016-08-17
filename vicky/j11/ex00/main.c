/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:03:18 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/25 12:09:22 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_list.h"

int				main(void)
{
	char		str[] = "tata";
	t_list		*list;

	list = ft_create_elem(str);
	printf("%s\n", (char *)list->data);
	free(list);
	list = NULL;
	return (0);
}
