/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 17:40:23 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 17:54:36 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_any(char **tab, int(*f)(char *));

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
	char	*tab[] = {"tete ", "titi ", "toto ", "tut tut", "tut teta", NULL};
	
	printf("%d\n", ft_any(tab, &ft_test));
	return (0);
}
