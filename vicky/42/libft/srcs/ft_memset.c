#include "libft.h"

void    			*ft_memset(void *s, int c, size_t n)
{
	size_t	    	i;
	unsigned char	*cpy;

	cpy = (unsigned char *)s;

	i = 0;
	while (i < n)
	{
		cpy[i] = c;
		i++;
	}
	return (s);
}
