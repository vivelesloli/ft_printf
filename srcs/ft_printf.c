/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <cnavone@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 07:06:05 by cnavone           #+#    #+#             */
/*   Updated: 2021/04/15 07:02:41 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *str, ...)
{
	va_list ap;
	t_struct mastruct;
	int		result;

	result = 0;
	va_start(ap, str);
	ft_initilization(&mastruct);
	while (*str)
	{
		if (*str == '%')
		{
			str = ft_flags(++str, &mastruct, ap);
			result += ft_arguments(str, ap, mastruct);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			result++;
		}
		if (*str)
			str++;
	}
	va_end(ap);
	return (result);
}
