#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sourc;
	int				i;

	i = 0;
	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	if (!dest && !sourc)
		return (NULL);
	while (n)
	{
		dest[i] = sourc[i];
		n--;
		i++;
	}
	return (dst);
}
