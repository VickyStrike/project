/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 19:30:42 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/12 19:55:41 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		racine;
	
	racine = 1;
	while (racine <= nb / 2)
	{
		if(nb == racine * racine)
		{
			return (racine);
		}
		else
		{
			racine++;
		}
	}
	return (0);
}
