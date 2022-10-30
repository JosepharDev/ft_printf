#include "printf.h"
size_t	ft_putnbr(int n)
{
	long int	nbr;
	size_t	cont;

	nbr = n;
	cont  = 0;
	if (n < 0)
	{
		ft_putchar('-', fd);
		nbr *= -1;
		cont++;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0', fd);
		cont++;
	}
	else
	{
		ft_putnbr(nbr / 10, fd);
		ft_putnbr(nbr % 10, fd);
	}
	return (cont);
}