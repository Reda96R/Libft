#include"libft"
int	ft_isascii(n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
