#include <stdlib.h>
#include "libft.h"

static void	strlcat_cpy(char *str, char const *s1, char const *s2)
{
	int	i;
	int	sec_i;

	sec_i = 0;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[sec_i])
	{
		str[i] = s2[sec_i];
		i++;
		sec_i++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length;
	int		length_final;

	if (!s1 || !s2)
	{
		if (s1)
			return ((char *)s1);
		else if (s2)
			return ((char *)s1);
		else
			return (NULL);
	}
	length = ft_strlen(s1);
	length_final = length + ft_strlen(s2) + 1;
	str = (char *)malloc(length_final * sizeof(char));
	if (str)
	{
		strlcat_cpy(str, s1, s2);
		return (str);
	}
	return (NULL);
}
