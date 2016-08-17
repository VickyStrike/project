/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:05:27 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 12:59:41 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H

# define KICK 0
# define KICK1 1
# define KICK2 2
# define KICK3 3
# define KICK4 4
# define KICK5 5
# define KICK6 6
# define KICK7 7
# define KICK8 8
# define KICK9 9
# define KICK10 10
# define KICK11 11
# define KICK12 12
# define PUNCH 13
# define HEADBUTT 14
# define CONNARD "DONNE UN PARAMETRE VALIDE CONNARD! (KICK|PUCNH|HEADBUTT) .\n"

# include "ft_perso.h"
# include "ft.h"

typedef struct	s_hit
{
	float		val;
	char		*mess;
}				t_hit;

extern t_hit	g_tab[15];

void		ft_ultimate_fight(t_perso *att, t_perso *def, int hit);

#endif
