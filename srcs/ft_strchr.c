#include"libft.h"
char	*ft_strchr(const char	*s, int	c)
{
	const char	*p;
	size_t	i;

	p = 0;
	i = 0;
	while(s[i])
	{
		if (c == s[i])
		return (p = &s[i]);
		i++;
	}
	if (c == '0')
		return (p = &s[i]);
	return (0);

}
