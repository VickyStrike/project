/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/27 16:56:56 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <fcntl.h>

void		ft_putcat(char *str, int fd)
{
	int		ret;

	while ((ret = read(fd, str, 30000)))
	{
		if (ret < 0)
		{
			ft_putstr("Erreur\n");
			return ;
		}
		str[ret] = '\0';
		ft_putstr(str);
	}
	return ;
}

int			main(int ac, char **av)
{
	char	str[30000];
	int		i;
	int		fd;

	if (ac == 1)
	{
		ft_putcat(str, 0);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) < 0)
		{
			ft_putstr("Erreur\n");
			return (1) ;
		}
		ft_putcat(str, fd);
		i++;
		close(fd);
	}
	return (0);
}
