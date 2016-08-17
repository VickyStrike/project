/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabbit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:12:49 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/17 11:59:36 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RABBIT_H
# define RABBIT_H

# define RB_WIND_W 1152
# define RB_WIND_H 648
# define RB_TITLE "RABBIT NINJA!!!!!" 
# define OPT_FSCREEN 0x1
# define OPT_SET "f"
# define SIZE_TYPE_EVENT 6
# define SIZE_EVENT_KEY 4
# define TILE_SIZE 32
# define TILSET_SIZE 8
# define PATH_MAP "ressources/map/map.txt"
# define PATH_TILSET "ressources/map/map.tilset.png"
# define MAP_SIZE_W 600
# define MAP_SIZE_H 400


# include "ft.h"
# include <SDL2/SDL.h>
# include <SDL2/SDL_image.h>
# include <SDL2/SDL_ttf.h>
# include <SDL2/SDL_mixer.h>


typedef struct		s_color
{
	int		c_r;
	int		c_g;
	int		c_b;
	int		c_a;
}			t_color;

typedef struct		s_texture
{
	SDL_Texture	*texture;
	SDL_Rect	rect;
	int		flag;
}			t_texture;

typedef struct		s_anim
{
	t_texture	anim[6];
	size_t		rate;
	size_t		timer;
	int		current_i;
}			t_anim;

typedef struct		s_window
{
	SDL_Window	*window;
	SDL_Renderer	*rend;
	int		flag_fscreen;
	t_color		color;
	t_anim		animation;
}			t_window;

typedef struct		s_event
{
	ssize_t		type;
	int		(*rb_type_hdl)(SDL_Event *, t_window *);
}			t_event;

typedef struct		s_tilset
{
	t_texture	texture;
	SDL_Rect	rect[TILSET_SIZE];
}			t_tilset;

typedef struct		s_map
{
	t_tilset	tilset;
	SDL_Renderer	*rend;
	int		w_map;
	int		h_map;
	char		*map;
}			t_map;

void			rb_init(void);
void			rb_game(int flag_fscreen);
void			rb_quit(void);

int			rb_create_window(t_window *window);
int			rb_create_rend(t_window *window);
void			rb_create_anim(t_window *window);

SDL_Texture		*rb_get_texture(SDL_Renderer *rend, t_texture *texture, char *path);
void			rb_set_anim_rect(t_window *window);

void			rb_map_len(t_map *map);


void			rb_draw(t_window *window);
int			rb_get_event(t_window *window);
void			rb_game_loop(t_window *window, t_map *map);

int			rb_quit_hdl(SDL_Event *event, t_window *window);
int			rb_window_event_hdl(SDL_Event *event, t_window *window);
int			rb_keydown_hdl(SDL_Event *event, t_window *window);
int			rb_keyup_hdl(SDL_Event *event, t_window *window);
int			rb_mouse_button_down_hdl(SDL_Event *event, t_window *window);
int			rb_mouse_button_up_hdl(SDL_Event *event, t_window *window);

int			rb_key_escape_hdl(SDL_Event *event, t_window *window);
int			rb_key_fullscreen_hdl(SDL_Event *event, t_window *window);
int			rb_key_disco_hdl(SDL_Event *event, t_window *window);
int			rb_key_right_image_hdl(SDL_Event *event, t_window *window);

#endif
