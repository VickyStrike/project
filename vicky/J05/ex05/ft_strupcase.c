/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 23:22:38 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/13 23:35:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_minuscule(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (42);
	}
	return (0);
}

char		*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_minuscule(str[i]) != 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
