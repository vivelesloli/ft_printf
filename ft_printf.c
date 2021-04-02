
#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	va_list		ap;
	int			result;
	t_element	stock;

	init(&stock);
	result = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%' && available(str + 1))
		{
			stock_flags(&stock, str + 1, ap);
			str += available(str + 1);
			print(&stock, ap, &result);
			init(&stock);
		}
		else
			result += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (result);
}
