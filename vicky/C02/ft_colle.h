/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 14:52:11 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 22:21:48 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H

# define BUFF_SIZE 1

# include "ft.h"

char	*ft_read(void);
int		ft_count(char *str, int *x_y);
char	*ft_concat(t_list *list, int len);
void	ft_check_colle(char *str, int *x_y, int *check);

void	ft_print_colle(int *x_y, int *check);

int		ft_cmp_colle00(int *x_y, char *src);
int		ft_cmp_colle01(int *x_y, char *src);
int		ft_cmp_colle02(int *x_y, char *src);
int		ft_cmp_colle03(int *x_y, char *src);
int		ft_cmp_colle04(int *x_y, char *src);

void	ft_colle00(int *coord, char *str);
void	ft_colle01(int *coord, char *str);
void	ft_colle02(int *coord, char *str);
void	ft_colle03(int *coord, char *str);
void	ft_colle04(int *coord, char *str);

#endif
