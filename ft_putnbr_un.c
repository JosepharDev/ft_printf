/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:17 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/04 18:38:31 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int nbr, int *len)
{
	int	err;

	err = 0;
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
