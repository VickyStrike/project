/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:11:51 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/12 15:59:48 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "carre.h"

typedef struct		s_env
{
	void			*p_mlx;
	void			*p_wind;
	int				x;
	int				y;
	int				x_pixel;
	int				y_pixel;
	int				color_pixel;
}					t_env;

int			carre_expose_hook(void *param)
{
	int		i;
	int		j;
	int		color;
	int		calcul;
	t_env	*env;
(void)calcul;
	env = (t_env *)param;
	color = 0x000000;
/*	if (env->x < 255)
		calcul = 0x000101;
	else
	{
		calcul = env->x / 255;
		if ((env->x % 255) > 0)
			calcul--;
		calcul *= 0x010000;
	}
*/	mlx_clear_window(env->p_mlx, env->p_wind);
	i = 0;
	while (i < env->x)
	{
/*		if (!calcul && i % 2)
			calcul++;
		color -= calcul;
		*/
		j = 0;
		while (j < env->y)
		{
			color = ((int)(225.0 / (float)env->x * (float)i)) + (((int)(225.0 / (float)env->y * (float)j))<< 8) + (((int)(225.0 / (float)env->x * ((float)env->x - (float)i)))<< 16);
			if (i == env->x_pixel && j == env->y_pixel)
			{
				mlx_pixel_put(env->p_mlx, env->p_wind, i, j, env->color_pixel);
			}
			else
				mlx_pixel_put(env->p_mlx, env->p_wind, i, j, color);
			j++;
		}
		i++;
	}
	return (0);
}

int			carre_key_hook(int key, void *param)
{
	t_env	*env;

	env = (t_env *)param;
	if (key == 0xff1b)
	{
		mlx_destroy_window(env->p_mlx, env->p_wind);
		exit(0);
	}
	if (key == 0xff52)
	{
		env->y_pixel -= 10;
		env->y_pixel = FT_ABS(env->y_pixel) % env->y;
	}
	else if (key == 0xff54)
	{
		env->y_pixel += 10;
		env->y_pixel = env->y_pixel % env->y;
	}
	else if (key == 0xff51)
	{
		env->x_pixel -= 10;
		env->x_pixel = FT_ABS(env->x_pixel) % env->x;
	}
	else if (key == 0xff53)
	{
		env->x_pixel += 10;
		env->x_pixel = env->x_pixel % env->x;
	}
	carre_expose_hook(param);
	return (0);
}

int			main(int ac, char **av)
{
	t_env	env;

	env.x = 255;
	env.y = 255;
	env.x_pixel = env.x / 2;
	env.y_pixel = env.y / 2;
	env.color_pixel = 0x000000;
	if (!(env.p_mlx = mlx_init()))
		return (-1);
	if (!(env.p_wind = mlx_new_window(env.p_mlx, env.x, env.y, "Carre")))
		return (-1);
	mlx_expose_hook(env.p_wind, &carre_expose_hook, (void *)&env);
	mlx_key_hook(env.p_wind, &carre_key_hook, (void *)&env);
	mlx_loop(env.p_mlx);
	return (0);
	(void)ac;
	(void)av;
}
