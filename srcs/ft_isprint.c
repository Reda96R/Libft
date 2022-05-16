#include"libft.h"
int	ft_isprint(int n)
{
	if(n >= 32 && n <= 126)
		return (1);
	return (0);
}
