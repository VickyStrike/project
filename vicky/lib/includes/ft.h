/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:41:50 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/12 15:27:23 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUFF_SIZE 512
# define IS_OPT(X, Y) (!(X & Y) ? 0 : 1)
# define FT_ABS(X) (X < 0 ? -X : X)

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <termios.h>
# include <time.h>
# include "ft_list.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_puterr(char *str);
void	ft_putnbr(int nb);
void	ft_puttab(char **tab);

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdelspace(char *str);
char	*ft_strdelspace_a(char *str);
void	ft_strdelspace_p(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strupcase(char *str);
void	ft_strswap(char **a, char **b);
char	*ft_strdup(char *src);
char	**ft_split_whitespaces(char *str);
int		ft_atoi(char *str);
int		ft_strchr(char c, char *str);
char	*ft_file_to_str(char *path);

void	ft_swap(int *a, int *b);

int		ft_is_digit(char c);
int		ft_is_neg(char c);

int		ft_tablen(char **tab);
void	ft_sort_wordtab(char **tab);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
void	ft_print_words_tables(char **str);
void	ft_destroy_tab(char ***tab);

t_list	*ft_create_elem(void *data);
t_list	*ft_mcreate_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_mlist_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list **begin_list);
void	ft_mlist_clear(t_list **begin_list);
char	*ft_concat(t_list *list, int len);

void	ft_bzero(void *area, int len);
void	ft_memset(void *area, int len, char c);

void	ft_raw_term(void);
void	ft_reset_term(void);

int		ft_get_opt(int ac, char **av, char *set);

#endif
