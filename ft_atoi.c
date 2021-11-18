#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int				neg;
	long long int	res;

	res = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	if (res < 0)
		return (0);
	return (res * neg);
}
