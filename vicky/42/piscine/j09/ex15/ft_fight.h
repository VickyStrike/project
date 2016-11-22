/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:05:27 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 22:02:31 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

# define KICK 15.0
# define PUNCH 5.0
# define HEADBUTT 20.0
# define CONNARD "DONNE UN PARAMETRE VALIDE CONNARD! (KICK|PUCNH|HEADBUTT) .\n"
# include "ft_perso.h"
# include "ft.h"

void		ft_fight(t_perso *att, t_perso *def, float hit);

#endif
