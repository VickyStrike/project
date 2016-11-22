/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 23:37:02 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/13 23:46:31 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (42);
	}
	return (0);
}

char			*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_maj(str[i]) != 0)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
