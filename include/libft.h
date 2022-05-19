#ifndef LIBFT_H
# define LIBFT_H

#include<unistd.h>
#include<stlib.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
	t_list;
}

int	ft_atoi(const char *str);
int	ft_isalnum(int n);
int	ft_isalpha(int n);
int	ft_isascii(int n);
int	ft_isdigit(int n);
int	ft_isprint(int n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *s);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int n);
int	ft_toupper(int n);

#endif
