/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 21:08:07 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/17 10:51:56 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

SDL_Texture			*rb_get_texture(SDL_Renderer *rend, t_texture *texture, char *path)
{
	SDL_Surface		*surface;

	if (!(surface = IMG_Load(path)))
	{
		ft_putstr("Erreur : ");
		ft_putstr((char *)SDL_GetError);
		return (NULL);
	}
	if (!(texture->texture = SDL_CreateTextureFromSurface(rend, surface)))
	{
		ft_putstr("Erreur : ");
		ft_putstr((char *)SDL_GetError);
	}
	
	SDL_QueryTexture(texture->texture, NULL, NULL, &texture->rect.w, &texture->rect.h);
	
	SDL_FreeSurface(surface);
	surface = NULL;
	return (texture);
}
