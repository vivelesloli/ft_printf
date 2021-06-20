/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:49:41 by cnavone           #+#    #+#             */
/*   Updated: 2021/06/19 12:51:14 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_space(int nb_space)
{
	int	i;

	i = -1;
	while (++i < nb_space)
		ft_putchar(' ');
	return (i);
}

int	ft_display_zero(int nb_zero)
{
	int	i;

	i = -1;
	while (++i < nb_zero)
		ft_putchar('0');
	return (i);
}

int	ft_putchar_1(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_count(unsigned long long nb)
{
	if (nb < 10)
		return (ft_putchar_1(nb + '0'));
	return (ft_putnbr_count(nb / 10)
		+ ft_putchar_1(nb % 10 + '0'));
}

int	ft_putstr_count(char *str, int size)
{
	int		i;
	char	*null;

	null = "(null)";
	i = 0;
	if (!str)
		while (i < size && null[i])
			ft_putchar(null[i++]);
	else
		while (str[i] && i < size)
			ft_putchar(str[i++]);
	return (i);
}
