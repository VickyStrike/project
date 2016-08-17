/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 12:05:22 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/27 12:32:43 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <fcntl.h>

int			main(int ac, char **av)
{
	int		fd;
	char	str[4096];
	int		ret;

	fd = 0;
	if (ac != 2)
		return (ft_puterr((ac == 1 ? "File name missing.\n"\
						: "Too many arguments.\n")));
//	if ((fd = open(av[1], O_RDONLY)) < 0)
//		return (1);
	while (ret = read(fd, str, 4095))
	{
		if (ret < 0)
			return (1);
		str[ret] = '\0';
		ft_putstr(str);
	}
//	close(fd);
	return (0);
}
