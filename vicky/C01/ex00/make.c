/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:37:28 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 18:58:31 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

static char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

void		make_str(int ac, char **av, char *str)
{
	int		i;

	str[0] = '\0';
	i = 1;
	while (i < ac)
	{
		ft_strcat(str, av[i]);
		i++;
	}
	return ;
}
