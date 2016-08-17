/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:05:55 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 15:08:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"


char		*g_tab[8] = {\
	"--------------------------\n                        | \n                       \\O/\n                        V\n                       / \\\n",\
	"--------------------------\n                        | \n                       \\O/\n                        V\n                       /   \n",\
	"--------------------------\n                        | \n                       \\O/\n                        V\n",\
	"--------------------------\n                        | \n                       \\O/\n",\
	"--------------------------\n                        | \n                       \\O \n",\
	"--------------------------\n                        | \n                        O \n",\
	"--------------------------\n                        | \n",\
	"--------------------------\n",\
	};

int			pendu(char **dico, int tlen)
{
	char	*cpy;
	char	*hidden_word;
	char	tested_letters[27];
	char	*msg;
	char	letter;
	int		hit;
	int		len;
	int		random;
	int		i;

	srand(time(NULL));
	random = rand() % tlen;
	hidden_word = dico[random];

	len = ft_strlen(hidden_word);
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (-1);
	ft_bzero((void *)tested_letters, 27);
	ft_memset((void *)cpy, len, '*');
	cpy[len] = '\0';
	msg = NULL;
	hit = 7;
	i = 0;

	while (ft_strcmp(hidden_word, cpy) && hit > 0)
	{
		system("clear");
		ft_putstr("Bienvenue dans le Pendu, appuyez sur [echap] pour quitter.\n");
		draw_pendu(hit);
		put_msg(cpy, tested_letters, msg);
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
	put_victory(hidden_word, hit);
	free(cpy);
	cpy = NULL;
	return (0);
}
