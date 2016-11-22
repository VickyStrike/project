/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 21:34:54 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 22:56:44 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				ft_atoi(char *str)
{
	int			i;
	int			neg;
	long int	nb;
	int			power;

	i = 0;
	neg = 0;
	str = ft_strdelspace_a(str);
	if ((neg = ft_is_neg(*str)) == 1)
		str++;
	while (ft_is_digit(str[i]) == 1)
		i++;
	if (i == 0)
		return (0);
	i--;
	nb = 0;
	power = 1;
	while (i >= 0)
	{
		nb = nb + ((str[i] - '0') * power);
		power = power * 10;
		i--;
	}
	return ((int)(neg == 1 ? -nb : nb));
}
