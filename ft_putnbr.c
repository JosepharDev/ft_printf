/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:20 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/05 10:46:13 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *len)
{
	long int	nbr;
	int			err;

	err = 0;
	nbr = n;
	if (n < 0)
	{
		if (ft_putchar('-', len) < 0)
			return (-1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		if (ft_putchar(nbr + '0', len) < 0)
			return (-1);
	}
	else
	{
		if (ft_putnbr(nbr / 10, len) < 0)
			return (-1);
		if (ft_putnbr(nbr % 10, len) < 0)
			return (-1);
	}
	return (err);
}
