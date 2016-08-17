/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:22:33 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/11 11:39:50 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		b;

	b = 0;
	while (*str != 0)
	{
		b++;
		str++;
	}
	return (b);
}
