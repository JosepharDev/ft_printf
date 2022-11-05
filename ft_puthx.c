/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:14 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/04 18:38:36 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthx(unsigned int n, char a, int *len)
{
	if (n >= 16)
		if (ft_puthx(n / 16, a, len) < 0)
			return (-1);
	if (a == 'x')
	{
		if (ft_putchar("0123456789abcdef"[n % 16], len) < 0)
			return (-1);
	}
	else if (a == 'X')
	{
		if (ft_putchar("0123456789ABCDEF"[n % 16], len) < 0)
			return (-1);
	}
	return (0);
}
