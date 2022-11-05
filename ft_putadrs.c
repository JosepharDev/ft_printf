/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:06:00 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/03 13:58:06 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthxadrs(unsigned long int n, int *len)
{
	int	err;

	err = 0;
	if (n >= 16)
	{
		if (ft_puthxadrs(n / 16, len) < 0)
			return (-1);
	}
	if (ft_putchar("0123456789abcdef"[n % 16], len) < 0)
		return (-1);
	return (err);
}

int	ft_putadrs(void *add, int *len)
{
	int					err;
	unsigned long int	n;

	err = 0;
	n = (unsigned long int)add;
	if (ft_putstr("0x", len) < 0)
		return (-1);
	if (ft_puthxadrs(n, len) < 0)
		return (-1);
	return (err);
}
