/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_map_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:33:28 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/17 11:56:17 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void		rb_map_len(t_map *map)
{
	int		i;

	i = 0;
	map->h_map = 0;
	while (map->map[i] != '\0')
	{
		if (map->map[i] == '\n')
			map->h_map = map->h_map + 1;
		i++;
	}
	map->w_map = 0;
	while (map->map[map->w_map] != '\n')
	{
		map->w_map = map->w_map + 1;
	}
	return ;
}
