#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (fd && s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}
