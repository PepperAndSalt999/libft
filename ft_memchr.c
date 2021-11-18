#include <stdlib.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char			letter;

	str = (unsigned char *)s;
	letter = c;
	while (n > 0)
	{
		if (letter == *str)
			return ((void *)str);
		n--;
		str++;
	}
	return (NULL);
}
