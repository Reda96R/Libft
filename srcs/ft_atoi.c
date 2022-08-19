#include<limits.h>
//#include"libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;
	r = 0;
	s = 1;
	i = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
			i++;
	}
	return (r * s);
}