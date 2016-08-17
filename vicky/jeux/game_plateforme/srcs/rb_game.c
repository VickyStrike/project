/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:32:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/17 12:01:32 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void				rb_game(int f_fscreen)
{
	t_window		window;
	t_map			map;
	int				i;

	window.color.c_r = 0x11;
	window.color.c_g = 0xd4;
	window.color.c_b = 0xbf;
	window.color.c_a = 0xff;

	window.flag_fscreen = f_fscreen;

	if (rb_create_window(&window) < 0)
		return ;
		
	if (rb_create_rend(&window) < 0)
		return ;

//	rb_create_anim(&window);
//	rb_set_anim_rect(&window);

	map.rend = window.rend;
	map.map = ft_file_to_str(PATH_MAP);
	rb_map_len(&map);
	map.tilset.texture.texture = rb_get_texture(map.rend, &map.tilset.texture, PATH_TILSET);

	map.tilset.texture.rect.x = map.tilset.texture.rect.w / 2 - map.tilset.texture.rect.h / 2;
	map.tilset.texture.rect.y = map.tilset.texture.rect.h / 2 - map.tilset.texture.rect.w / 2;

	rb_game_loop(&window, &map);

	i = 0;
	while (i < 6)
	{
		SDL_DestroyTexture(map.tilset.texture.texture);
		i++;
	}
	SDL_DestroyRenderer(window.rend);
	SDL_DestroyWindow(window.window);
	return ;
}
