/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:21:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/17 12:52:32 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
static void	ft_print(char k, char j, char i)
{
	ft_putchar(k);
	ft_putchar(j);
	ft_putchar(i);
	if	(k == '7' && j == '8' && i == '9')
	{
		;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return ;
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	k = '0';
	while (k <= '7')
	{	
		j = k + 1;
		while (j <= '8')
		{
			i = j + 1;
			while (i <= '9')
			{
				ft_print(k, j, i);
				i = i + 1;
			}
			j = j + 1;
		}
		k = k + 1;
	}
	return ;
}
