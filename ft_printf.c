#include "printf.h"
int ft_printf(char *str, ...)
{
	int i = 0;
	int count = 0;
	int len = ft_strlen(str);
	va_list args;
	va_start (args, str);

	while(str[i])
	{
		while(str[i] != '%' && str[i])
			count += ft_putchar(str[i++]);
		if(str[i + 1] == 'd')
		{
			count += ft_putnbr(va_arg(args, int));
			i++;
		}
		else if(str[i] == '%' && str[i + 1] == 'c')
		{
			count+=ft_putchar(va_arg(args, int));
			i++;
		}
		else if(str[i] == '%' && str[i + 1] == 'x')
		{
			count += ft_puthx(va_arg(args, int), str[i + 1]);
			i++;
		}
		else if(str[i] == '%' && str[i + 1] == 's')
			{
				count += ft_putstr(va_arg(args, char *));
				i++;
			}
	i++;
	}
	va_end(args);
	return (count);
} 
#include <stdio.h>
int main()
{
	char s[10] = "hello";
	printf("  %d\n  ", ft_printf("hello %d %c jj %x %s", 123, 'h', 10, s));
	printf("  %d\n  ", printf("hello %d %c jj %x %s", 123, 'h', 10, s));
}