/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:51:45 by cnavone           #+#    #+#             */
/*   Updated: 2021/06/19 12:53:20 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_nb_base(unsigned long long nb, int base)
{
	int	count;

	count = 1;
	while (nb >= (unsigned long long)base)
	{
		nb /= (unsigned long long)base;
		count++;
	}
	return (count);
}

int	ft_print_address(va_list ap, t_flags flags)
{
	unsigned long long	addr;
	int					count;
	int					size_nb;
	char				*str;

	str = va_arg(ap, char *);
	count = 0;
	addr = (unsigned long long)str;
	if (str == NULL && flags.nb_precision == 0)
		size_nb = 2;
	else
		size_nb = ft_size_nb(addr, 16) + 2;
	if (!flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space(flags.lmc - size_nb);
	count += ft_putstr_count("0x", 2);
	if (flags.nb_precision > size_nb)
		count += ft_display_zero(flags.nb_precision - size_nb + 2);
	if (!(str == NULL && flags.nb_precision == 0))
		count += ft_putnbr_hexa_count(addr);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space(flags.lmc - size_nb);
	return (count);
}
