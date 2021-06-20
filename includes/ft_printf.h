/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:29:12 by cnavone           #+#    #+#             */
/*   Updated: 2021/06/19 12:49:29 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_flags {
	int		display_zero;
	int		space_reverse;
	int		lmc;
	int		nb_precision;
}				t_flags;
int				ft_printf(const char *format, ...)
				 __attribute__((format(printf, 1, 2)));
int				ft_print_address(va_list ap, t_flags flags);
int				ft_print_char(va_list ap, t_flags flags);
int				ft_print_decimal(va_list ap, t_flags flags);
int				ft_print_string(va_list ap, t_flags flags);
int				ft_print_rate(t_flags flags);
int				ft_print_unsigned(va_list ap, t_flags flags,
					int (f)(unsigned long long), int base);
int				ft_print_arg(const char *format, va_list ap, t_flags flags);
int				ft_putchar_1(char c);
int				ft_putnbr_hexa_count(unsigned long long nb);
int				ft_putstr_count(char *str, int size);
int				ft_putnbr_count(unsigned long long nb);
const char		*parse_flags_lmc(const char *format, t_flags *flags,
					va_list ap);
const char		*parse_flags_precision(const char *format,
					t_flags *flags, va_list ap);
const char		*parse(const char *format, t_flags *flags, va_list ap);
int				ft_display_space(int nb_space);
int				ft_display_zero(int nb_zero);
int				ft_display_space_unsigned(int nb, int size_nb, t_flags flags);
int				ft_display_zero_unsigned(int size_nb, t_flags flags);
int				ft_display_nb_unsigned(long nb, int size_nb, t_flags flags,
					int (f)(unsigned long long));
int				ft_putchar_hexa_maj_1(char c);
int				ft_putnbr_hexa_maj_count(unsigned long long nb);
int				ft_size_nb(unsigned long long nb, int base);
int				ft_zero_exception(t_flags flags);
size_t			ft_strlen(const char *s);
#endif
