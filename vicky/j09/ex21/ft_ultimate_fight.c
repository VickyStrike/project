/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:08:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 12:55:27 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"

t_hit		g_tab[15] = {\
	{/*KICK, */15.0, " donne un coup de pied a "},\
	{/*KICK1,*/ 13.0, " donne un coup de type 1 a "},\
	{/*KICK2,*/ 3.0, " donne un coup de second type a "},\
	{/*KICK3,*/ 18.0, " donne un coup du 3eme type a "},\
	{/*KICK4,*/ 9.0, " donne un coup de type 4 a "},\
	{/*KICK5,*/ 11.0, " donne un coup de 5eme type a "},\
	{/*KICK6,*/ 13.0, " donne un coup de sixieme type  a "},\
	{/*KICK7,*/ 8.0, " donne un coup de type 7 a "},\
	{/*KICK8,*/ 6.0, " donne un tit coup a "},\
	{/*KICK9,*/ 11.0, " donne un coup de type 9 a "},\
	{/*KICK10,*/ 9.0, " donne un coup de type 10 a "},\
	{/*KICK11,*/ 18.0, " donne un coup qui fait trop mal a "},\
	{/*KICK12,*/ 10.0, " donne un coup du 12eme type a "},\
	{/*PUNCH,*/ 5.0, " donne un coup de poing a "},\
	{/*HEADBUTT,*/ 20.0, " donne un coup de boule a "}\
	};

void		ft_ultimate_fight(t_perso *att, t_perso *def, int hit)
{

	if (def->life <= 0.0 || att->life <= 0.0)
		return ;
	if (hit > 14 || hit < 0)
	{
		ft_putstr(CONNARD);
		return ;
	}
	ft_putstr(att->name);
	ft_putstr(g_tab[hit].mess);
	ft_putstr(def->name);
	ft_putstr(".\n");
	def->life -= g_tab[hit].val;
	if (def->life <= 0.0)
	{
		ft_putstr(def->name);
		ft_putstr(" est mort.\n");
	}
	return ;	
}
