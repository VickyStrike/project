/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 19:56:59 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 20:17:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_switch(char **tab, int i, int len)
{
	while (i + 1 < len)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	return ;
}

int				ft_compact(char **tab, int length)
{
	int			i;

	i = 0;
	while (i < length)
	{
		if (tab[i] == NULL)
		{
			ft_switch(tab, i, length);
			length--;
		}
		else
			i++;
	}
	return (length);
}
