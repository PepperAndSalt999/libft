#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	neelen;

	i = 0;
	j = 0;
	if (needle[0])
	{
		while (haystack[i] && len)
		{
			neelen = len;
			while (needle[j] == haystack[i + j] && neelen)
			{
				neelen--;
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
			len--;
			j = 0;
			i++;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
