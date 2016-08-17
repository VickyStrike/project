/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 16:42:47 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/12 17:03:06 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		result;
	
	result = nb;
	if(power < 0)
	{
		return (0);
	}
	if(power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
