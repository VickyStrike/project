#include "ft_colle.h"

char    *ft_read(void)
{
  char    str[BUFF_SIZE + 1];
  char    *stock;
  t_list  *list;
  int     len;
  int     ret;

  len = 0;
  list = NULL;
  while ((ret = read(0, str, BUFF_SIZE)))
  {
    if (ret == -1)
    {
      return (NULL);
    }
    str[ret] = '\0';
    len += ret;
    ft_mlist_push_back(&list, (void *)str);
  }
  stock = ft_concat(list, len);
  ft_mlist_clear(&list);
  return (stock);
}
