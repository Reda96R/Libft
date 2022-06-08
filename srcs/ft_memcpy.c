#include"libft.h"
void	*ft_memcpy(void	*dest, const	void	*src, size_t	n)
{
	size_t	i;
	char	*s1;
	char	*d1;

	i = 0;
	s1 = (char *)src;
	d1 = (char *)dest;
	if (!d1)
		return(NULL);
	while(i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return(d1);
}
