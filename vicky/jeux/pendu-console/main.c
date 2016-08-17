/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 15:08:29 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:48:18 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

char			**get_dico(char *path)
{
	char		*content;
	char		**dico;

	if (!(content = ft_file_to_str(path)))
		return (NULL);
	dico = ft_split_whitespaces(content);
	free(content);
	content = NULL;
	return (dico);
}

int				main(int ac, char **av)
{
	char		**dico;
	int			len;
	int			opt;
	t_party		party;
	t_player	*tmp;

	opt = ft_get_opt(ac, av, OPT_CHARSET);
	if (!(IS_OPT(opt, OPT_MULTI)))
	{
		if (!(dico = get_dico("dico.txt")))
			return (-1);
		len = ft_tablen(dico);
		while (42)
			pendu(dico, len);
	}
	ask_name(party.player_1.name, 1);
	ask_name(party.player_2.name, 2);
	party.player_1.score = 0;
	party.player_2.score = 0;
	party.donneur = &party.player_1;
	party.demandeur = &party.player_2;
	party.tour = 0;
	while (42)
	{
		m_pendu(&party);
		tmp = party.donneur;
		party.donneur = party.demandeur;
		party.demandeur = tmp;
	}
	return (0);
}
