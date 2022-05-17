#include"libft.h"
char	*ft_strrchr(const char *s, int c)
{
	const char      *p;
        size_t     i;

        p = 0;
	i = 0;
	while(s[i])
		i++;
	if (c == '0')
		return (p = &s[i]);
        while(i > 0)
        {
                if (c == s[i])
			return (p = &s[i]);
		i--;
        }
	if (s[0] == c)
		return (p = &s[0]);
        return (0);

}
