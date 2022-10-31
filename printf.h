#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_puthx(int n, char a);

#endif