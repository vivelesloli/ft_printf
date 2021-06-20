/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:55:47 by cnavone           #+#    #+#             */
/*   Updated: 2021/06/19 12:55:50 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_rate(t_flags flags)
{
	int	count;

	count = 0;
	if (flags.space_reverse)
		flags.display_zero = 0;
	if (!flags.space_reverse && !flags.display_zero)
		count += ft_display_space(flags.lmc - 1);
	if (flags.display_zero && flags.lmc > 1)
		count += ft_display_zero(flags.lmc - 1);
	count += ft_putchar_1('%');
	if (flags.space_reverse && !flags.display_zero)
		count += ft_display_space(flags.lmc - 1);
	return (count);
}
