/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:17:32 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/11 15:29:14 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(char *a, char *b)
{
	char	cp;

	cp = *a;
	*a = *b;
	*b = cp;
	return ;
}

static int	ft_strlen(char *str)
{
	int		taille;
	
	taille = 0;
	while (*str != '\0')
	{
		taille++;
		str++;
	}
	return (taille);
}

char		*ft_strrev(char *str)
{
	int		taille;
	int		milieu;
	int		i;
	
	if (str == 0)
	{
		return (str);
	}
	i = 0;
	taille = ft_strlen(str) - 1;
	if (taille == -1)
	{
		return (str);
	}
	milieu = taille / 2;
	while (taille > milieu)
	{
		ft_swap(str + i, str + taille);
		i++;
		taille--;
	}
	return (str);
}
