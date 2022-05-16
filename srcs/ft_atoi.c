#include<limits.h>
#include"libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;
	r = 0;
	s = 1;
	i = 0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		if(r > INT_MAX / 10 || (r == INT_MAX / 10 && str[i] - '0' > 7))
		{
			if (s == 1)
				return (-1);
			else 
				return (0);
		}
		r = (r * 10 + str[i] - '0');
			i++;
	}
	r *= s;
	return (r);
}
