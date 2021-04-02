
#include "ft_printf.h"

void	init(t_element *elem)
{
	elem->p_on = 0;
	elem->precision = 0;
	elem->width = 0;
	elem->reverse = 0;
	elem->zero = ' ';
	elem->type = 0;
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		flags_occurs(char c)
{
	if (c == '.' || c == '*' || c == '-' || is_digit(c))
		return (1);
	return (0);
}

int		type_occurs(char c)
{
	if (c == 'c' || c == 'd' || c == 's' || c == 'p')
		return (1);
	if (c == 'x' || c == 'X' || c == 'u' || c == 'i' || c == '%')
		return (1);
	return (0);
}

int		available(const char *str)
{
	int i;

	i = 0;
	while (flags_occurs(str[i]))
		i++;
	if (type_occurs(str[i]))
		return (i + 1);
	return (0);
}
