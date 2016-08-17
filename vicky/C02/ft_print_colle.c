#include "ft_colle.h"

void              ft_print_colle(int *taille, int *check)
{
  int             i;
  int             flag;

  i = 0;
  while (i < 5)
  {
    if (check[i] == 0)
    {
      if (flag)
        ft_putstr(" || ");
      ft_putstr("[colle-0");
      ft_putnbr(i);
      ft_putstr("] [");
      ft_putnbr(taille[0]);
      ft_putstr("] [");
      ft_putnbr(taille[1]);
      ft_putchar(']');
      flag = 1;
    }
	i++;
  }
  if (!flag)
    ft_putstr("aucune");
}
