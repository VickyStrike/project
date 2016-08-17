/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_pendu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:37:17 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:40:02 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

static void	cpy_init(char *cpy, char *hidden)
{
	int		i;

	i = 0;
	while (hidden[i] != '\0')
	{
		if (hidden[i] == '-')
			cpy[i] = hidden[i];
		else
			cpy[i] = '*';
		i++;
	}
	return ;
}

static char	*check(char *word)
{
	int		i;

	i = 0;
	if (!word)
		return (NULL);
	while (word[i] != '\0' && word[i] != '\n')
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			word[i] -= 32;
		if ((word[i] < 'A' || word[i] > 'Z') && (word[i] != '-' || (word[i] == '-' && !i)))
		{
			free(word);
			word = NULL;
			return (word);
		}
		i++;
	}
	word[i] = '\0';
	return (word);
}

void		m_pendu(t_party *party)
{
	char	*cpy;
	char	*hidden_word;
	char	tested_letters[27];
	char	*msg;
	char	letter;
	int		hit;
	int		len;
	int		i;

	hidden_word = NULL;
	while (!hidden_word)
	{
		system("clear");
		if (!(hidden_word = check(ask_word(party->donneur))))
		{
			ft_putstr("Mot incorrect. Entrez un mot compose de lettres de l'alphabet.\n");
			sleep(2);
		}
		else if (ft_strlen(hidden_word) < 3)
		{
			ft_putstr("Mot vide. Entrez au moins trois lettres de l'alphabet.\n");
			sleep(2);
			free(hidden_word);
			hidden_word = NULL;
		}
	}
	len = ft_strlen(hidden_word);
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return ;
	ft_bzero((void *)tested_letters, 27);
	cpy_init((void *)cpy, hidden_word);
	cpy[len] = '\0';
	msg = NULL;
	hit = 7;
	i = 0;

	while (ft_strcmp(hidden_word, cpy) && hit > 0)
	{
		system("clear");
		ft_putstr("Bienvenue dans le Pendu, appuyez sur [echap] pour quitter.\n");
		draw_pendu(hit);
		m_put_msg(cpy, tested_letters, msg, party);
		msg = NULL;
		letter = get_letter();
		if (is_finish(letter, tested_letters, &msg, 0))
		{
			hit--;
			continue ;
		}
		tested_letters[i++] = letter;
		if (is_finish(letter, hidden_word, &msg, 1))
		{
			hit--;
			continue ;
		}
		set_letter(letter, cpy, hidden_word);
	}
	if (hit > 0)
		party->demandeur->score += 1;
	else
		party->donneur->score += 1;
	put_victory(hidden_word, hit);
	free(cpy);
	cpy = NULL;
	free(hidden_word);
	hidden_word = NULL;
	return ;
}
