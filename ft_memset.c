#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*mem;
	int				i;

	mem = (unsigned char *)dest;
	i = 0;
	while (len > 0)
	{
		mem[i] = c;
		i++;
		len--;
	}
	return (dest);
}
