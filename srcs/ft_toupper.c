#include"libft"
int	ft_toupper(int n)
{
	if (n >= 'a' && n <= 'z')
		return (n - 32);
	return (n);
}
