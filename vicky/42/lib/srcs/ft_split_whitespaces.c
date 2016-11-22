/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_withpace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:44:39 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/20 20:38:28 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_is_space(char c)
{
	if (c != ' ' && c != '\n' && c != '\t')
		return (0);
	return (1);
}

static int	ft_wlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && ft_is_space(str[i]) == 0)
	{
		i++;
	}
	return (i);
}

static void	ft_wcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && ft_is_space(src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	return ;
}

static int	ft_count_word(char *str)
{
	int		i;
	int		nb;
	
	i = 0;
	if (ft_is_space(str[0]))
		nb = 0;
	else
		nb = 1;
	while (str[i] != '\0')
	{
		if (ft_is_space(str[i]) && str[i + 1] != '\0'\
				&& ft_is_space(str[i + 1]) == 0)
			nb++;
		i++;
	}
	return (nb);
}

char		**ft_split_whitespaces(char *str)
{
	char	**dest;
	int		word;
	int		size;
	int		i;

	word = ft_count_word(str);
	if ((dest = (char **)malloc(sizeof(char*) * word + 1)) == NULL)
		return (NULL);
	dest[word] = NULL;
	i = 0;
	while (*str != '\0')
	{
		if (ft_is_space(*str))
			str++;
		else
		{
			size = ft_wlen(str);
			if ((dest[i] = (char *)malloc(sizeof(char) * size + 1)) == NULL)
				return (NULL);
			ft_wcpy(dest[i], str);
			str = str + size;
			i++;
		}
	}
	return (dest);
}
