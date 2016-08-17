#include "ft_colle.h"

int          ft_count(char *str, int *size)
{
  int     check_line;
  int     i;

  i = 0;
  check_line = 0;
  while (str[i])
  {
    if (str[i] != '\n')
      size[0] += 1;
    else
    {
      if (!size[0] || ((size[0] != check_line) && check_line))
        return (0);
      size[1] += 1;
      if (str[i + 1] == '\0')
        return (1);
      check_line = size[0];
      size[0] = 0;
    }
    i++;
  }
  return (0);
}
