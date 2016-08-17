/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:21:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/17 13:03:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_print(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i != '9' || j != '8' || k != '9' || l != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return ;
}

static char		ft_initialize(char k, char i, char j)
{
	if (k == i)
	{
		return (j + 1);
	}
	else
	{
		return ('0');
	}
}

static void		ft_loop(char i, char j, char k)
{
	char		l;
	
	while (k <= '9')
	{
		l = ft_initialize(k, i, j);
		while (l <= '9')
		{
			ft_print(i, j, k, l);
			l = l + 1;
		}
		k = k + 1;
	}
	return ;
}

void			ft_print_comb2(void)
{
	char		i;
	char		j;
	char		k;
	
	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			ft_loop(i, j, k);
			j = j + 1;
		}
		i = i + 1;
	}
	return ;
}
