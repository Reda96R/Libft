#include"libft.h"
void	ft_putendl(char *s, int fd)
{
	if (s != 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('/n', fd);
	}
}
