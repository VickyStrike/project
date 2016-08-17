/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:08:33 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 14:30:15 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_str_to_file(char *str, char *path, int flag)
{
	int		fd;

	if (flag)
		fd = open(path, O_WRONLY | O_CREAT | O_APPEND, 0755);
	else
		fd = open(path, O_WRONLY | O_CREAT, 0755);
	if (fd < 0)
		return (-1);
	write(fd, str, ft_strlen(str));
	close(fd);
	return (0);
}
