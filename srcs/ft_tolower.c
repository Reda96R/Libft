#include"libft.h"
int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (n + 32);
	return (n);
}
