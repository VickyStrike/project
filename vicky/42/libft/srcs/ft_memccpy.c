#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;

	i = 0;
	while (i < n)
	{
		if (src_cpy[i] == (unsigned char)c)
		{
			dest_cpy[i] = (unsigned char)c;
			i++;
			return (dest + i);
		}
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (NULL);
}
