#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str)
	{
		ft_strlcpy(str, s1, len);
		return (str);
	}
	return (NULL);
}
