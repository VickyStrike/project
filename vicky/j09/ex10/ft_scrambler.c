/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrambler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 14:49:38 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 19:04:10 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		cpy;
	int		cpy2;

	cpy = ***a;
	cpy2 = *******c;
	***a = *b;
	*b = ****d;
	*******c = cpy;
	****d = cpy2;
	return ;
}
