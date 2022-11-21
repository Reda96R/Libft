/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:37:15 by rerayyad          #+#    #+#             */
/*   Updated: 2022/10/29 12:47:51 by rerayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;
	char	*ss1;
	char	*ss2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	len = ft_strlen(s1) + ft_strlen (s2);
	str = (char *)malloc(sizeof (char) * len + 1);
	if (!str)
		return (0);
	str = ft_strcpy(str, ss1);
	str += ft_strlen(ss1);
	str = ft_strcpy(str, ss2);
	str += ft_strlen(ss2);
	*str = '\0';
	str -= len;
	return (str);
}
