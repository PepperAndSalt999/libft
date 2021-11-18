#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	carac;
	char			*res;
	int				i;

	i = ft_strlen(s);
	carac = (char)c;
	while (i >= 0)
	{
		if (s[i] == carac)
		{
			res = (char *)(&s[i]);
			return (res);
		}
		i--;
	}
	return (0);
}
