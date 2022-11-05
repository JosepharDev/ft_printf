/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:57:07 by yoyahya           #+#    #+#             */
/*   Updated: 2022/11/03 17:53:22 by yoyahya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int n, int *len);
int	ft_putnbr_un(unsigned int nbr, int *len);
int	ft_putstr(char *str, int *len);
int	ft_putchar(char c, int *len);
int	ft_puthx(unsigned int n, char a, int *len);
int	ft_putadrs(void *add, int *len);

#endif