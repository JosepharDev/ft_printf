#include "printf.h"
int ft_count(int n)
{
	int i = 0;
	while(n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
int	ft_puthx(int n, char a)
{
	int i;
	i = ft_count(n);
    if (n >= 16)
	{
        ft_puthx(n / 16, a);
	}
	if (a == 'x')
	{
        ft_putchar("0123456789abcdef"[n % 16]);
	}
    else if (a == 'X')
	{
        ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}

