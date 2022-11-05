/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:25 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/04 18:35:20 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *len)
{
	int	err;

	err = 0;
	if (str == NULL)
	{
		if (ft_putstr("(null)", len) < 0)
			return (-1);
	}
	while (str && *str)
	{
		if (ft_putchar(*str, len) < 0)
			return (-1);
		str++;
	}
	return (err);
}
