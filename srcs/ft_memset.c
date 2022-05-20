#include"libft"
void	*ft_memset(void	*b, int	n, size_t	len)
{
	size_t	i;
	unsigned char	*str;

	str = (char*)b;
	i = 0;
	while(i < len)
	{
		str[i] = n;
		i++;
	}
	return (str);
}
