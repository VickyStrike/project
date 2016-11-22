#include "libft.h"

void			*ft_memchr(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*cpy;
	
	cpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
