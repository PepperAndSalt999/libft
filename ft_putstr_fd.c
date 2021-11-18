#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd && s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
