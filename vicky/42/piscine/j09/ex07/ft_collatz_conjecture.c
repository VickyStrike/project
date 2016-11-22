/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 13:57:46 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 15:50:43 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int			i;
	
	if (base <= 1)
		return(0);
	if (base % 2 == 0)
		i = ft_collatz_conjecture(base / 2);
	else if (base % 2 != 0)
		i = ft_collatz_conjecture(base * 3 + 1);
	return (i + 1);
}
