#include "libft.h"

void    			*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  		i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	else
	{
        while (n > 0)
        {
            dest_cpy[n - 1] = src_cpy[n - 1];
            n--;
        }
	}
	return (dest);
}
