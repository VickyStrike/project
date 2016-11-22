/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:36:58 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/16 22:09:00 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static int		verif_param(int x, int y)
{
	if (x < 0 || y < 0)
	{
		return (0);
	}
	else
		return (1);
}

static void		draw_line(int x, char a, char b)
{
	int			i;

	i = 0;
	while (i < x)
	{
		if (!i || i == (x - 1))
			ft_putchar(a);
		else
			ft_putchar(b);
		i++;
	}
	ft_putchar('\n');
	return ;
}

void			colle(int x, int y)
{
	int			i;

	if (verif_param(x, y) == 0)
	{
		return ;
	}
	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
		{
			draw_line(x, 'o', '-');
		}
		else
		{
			draw_line(x, '|', ' ');
		}
		i++;
	}
	return ;
}
