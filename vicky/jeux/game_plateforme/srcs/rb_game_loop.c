/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:02:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/17 11:00:03 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void		rb_game_loop(t_window *window, t_map *map)
{
	while (42)
	{
		if (rb_get_event(window))
			break ;
//		rb_draw(window);
		rb_draw_map(window, map);
		SDL_Delay(16);
	}
	return ;
}
