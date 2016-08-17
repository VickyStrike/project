/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:40:23 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 17:59:40 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_count_if(char **tab, int(*f)(char *));

int			ft_test(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int			main(void)
{
	char	*tab[] = {"tate ", "titi ", "tato ", "tut tut", "tat teta", NULL};
	
	printf("%d\n", ft_count_if(tab, &ft_test));
	return (0);
}
