/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pendu.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:36:39 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:16:59 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PENDU_H
# define PENDU_H

# include "ft.h"

# define GAGNE_MSG "Bravo, vous avez gagne!!!!\n"
# define PENDU_MSG "PENDU!!! Essaies encore.\n"
# define OPT_CHARSET "ml"
# define OPT_MULTI 1
# define OPT_LEVEL 2
# define BUFF_NAME 119

typedef struct	s_player
{
	char		name[BUFF_NAME + 1];
	int			score;
}				t_player;

typedef struct	s_party
{
	t_player	player_1;
	t_player	player_2;
	t_player	*donneur;
	t_player	*demandeur;
	int			tour;
}				t_party;

int				pendu(char **dico, int tlen);
char			**get_dico(char *path);
void			set_letter(char c, char *dest, char *src);
char			get_letter(void);
void			put_msg(char *cpy, char *tested_letters, char *msg);
void			m_put_msg(char *cpy, char *tested_letters, char *msg, t_party *party);
void			draw_pendu(int hit);
int				is_finish(char c, char *str, char **msg, int flag);
void			put_victory(char *hidden_word, int hit);
void			m_pendu(t_party *party);
char			*ask_word(t_player *player);
void			ask_name(char *player, int nb);
extern char		*g_tab[8];

#endif
