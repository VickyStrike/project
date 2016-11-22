/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_opt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 13:44:47 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 14:16:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int	is_opt(char c, char *set)
{
	int		opt;
	int		i;

	opt = 1;
	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (opt);
		i++;
		opt = opt << 1;
	}
	return (0);
}

static int	get_opt_arg(char *av, char *set)
{
	int		opt;
	int		i;

	opt = 0;
	i = 0;
	while (av[i] != '\0')
	{
		opt = opt | is_opt(av[i], set);
		i++;
	}
	return (opt);
}

int			ft_get_opt(int ac, char **av, char *set)
{
	int		opt;
	int		i;

	opt = 0;
	i = 1;
	while (i < ac)
	{
		if (av[i][0] != '-')
			break ;
		opt = opt | get_opt_arg(av[i] + 1, set);
		i++;
	}
	return (opt);
}
