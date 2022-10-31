#include "printf.h"
size_t	ft_putnbr(int n)
{
	long int	nbr;
	size_t	cont;

	nbr = n;
	cont  = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		cont++;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
		cont++;
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (cont);
}