/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:11 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/05 11:33:35 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_conve(va_list args, char fmt, int *len)
{
	int	err;

	err = 0;
	if (fmt == 'd' || fmt == 'i')
		err = ft_putnbr(va_arg(args, int), len);
	else if (fmt == 'u')
		err = ft_putnbr_un(va_arg(args, unsigned int), len);
	else if (fmt == 'c')
		err = ft_putchar(va_arg(args, int), len);
	else if (fmt == 's')
		err = ft_putstr(va_arg(args, char *), len);
	else if (fmt == '%')
		err = ft_putchar(fmt, len);
	else if (fmt == 'x')
		err = ft_puthx(va_arg(args, int), fmt, len);
	else if (fmt == 'X')
		err = ft_puthx(va_arg(args, int), fmt, len);
	else if (fmt == 'p')
		err = ft_putadrs(va_arg(args, void *), len);
	else if (fmt == '\0')
		return (err);
	else
		err = ft_putchar(fmt, len);
	return (err);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		err;

	len = 0;
	err = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_check_conve(args, *str, &len) < 0)
				return (-1);
		}
		else
			if (ft_putchar(*str, &len) < 0)
				return (-1);
		if (!*str)
			break ;
		str++;
	}
	va_end(args);
	return (len);
}
