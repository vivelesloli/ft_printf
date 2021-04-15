/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <cnavone@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 07:05:18 by cnavone           #+#    #+#             */
/*   Updated: 2021/04/15 07:10:31 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_arguments(const char *format, va_list ap, t_struct flags)
{
	if (*format == 's')
		return (ft_display_s(ap, flags));
	else if (*format == 'c')
		return (ft_displau_c(ap, flags));
	else if (*format == 'd' || *format == 'i')
		return (ft_display_d(ap, flags));
	else if (*format == 'u')
		return (ft_display_u(ap, flags));
	else if (*format == 'x')
		return (ft_display_x(ap, flags));
	else if (*format == 'X')
		return (ft_display_X(ap, flags));
	else if (*format == 'p')
		return (ft_display_p(ap, flags));
	else if (*format == '%')
		return (ft_display_percent(flags));
	return (0);
}

void		ft_initialization(t_struct *mastruct)
{
	mastruct->zero = 0;
	mastruct->negative = 0;
	mastruct->width = 0;
	mastruct->precision = -1;
}

const char	*ft_flags(const char *str, t_struct *mastruct, va_list ap)
{
	while (*str == '-' || *str == '0')
	{
		if (*str == '-')
			mastruct->negative = 1;
		if (*str == '0')
			mastruct->zero = 1;
		str++;
	}
	str = parse_width(str, mastruct, ap);
	str = parse_precision(str, mastruct, ap);
	return (str);
}

const char	*ft_width(const char *str, t_struct *mastruct, va_list ap)
{
	if (*str == '*')
	{
		mastruct->width = va_arg(ap, int);
		if (mastruct->width < 0)
		{
			mastruct->widht = -mastruct->width;
			mastruct->negative = 1;
		}
		str++;
	}
	else
		while (*str >= '0' && *str <= '9')
		{
			mastruct->width = mastruct->width * 10 + (*str - '0');
			str++;
		}
	return (str);
}

const char	*ft_precision(const char *format, t_flags *flags
			, va_list ap)
{
	if (*format == '.')
	{
		format++;
		if (*format == '*')
		{
			flags->nb_precision = va_arg(ap, int);
			format++;
		}
		else
		{
			flags->nb_precision = 0;
			while (*format >= '0' && *format <= '9')
			{
				flags->nb_precision = flags->nb_precision * 10 + *format - '0';
				format++;
			}
		}
	}
	return (format);
}
