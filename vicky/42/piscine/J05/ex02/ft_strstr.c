/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:37:31 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/13 19:33:26 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_findtheword(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[i])
		{
			return (0);
		}
		i++;	
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_findtheword(str + i, to_find) == 1)
			{
				return (str + i);
			}
		}
		i++;	
	}
	return (NULL);
}
