/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 17:19:05 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/12 19:13:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		result;

	result = 0;
	if(index < 0)
	{
		return (-1);
	}
	if(index == 1)
	{
		return (1);
	}
	if(index == 0)
	{
		return (0);
	}
	if(index > 0)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
