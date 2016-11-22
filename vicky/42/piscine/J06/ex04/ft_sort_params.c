/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:03:24 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/16 15:04:18 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static void		ft_strswap(char **a, char **b)
{
	char		*cp;

	cp = *a;
	*a = *b;
	*b = cp;
	return ;
}

void		ft_sort_params(int argc, char **argv)
{
	int		flag;
	int		i;

	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		i = 1;
		while (i + 1 < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_strswap(argv + i, argv + i + 1);
				flag = 1;
			}
			i++;
		}
	}
	return ;
}

int			main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
