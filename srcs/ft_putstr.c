#include"libft.h"
void	ft_pustr(char *s)
{
	int	i;
	if (s != 0)
	{
		i = 0;
		while(s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
