#include "ft_printf.h"

int		digit_t(char c)
{
	if (c == 'd' || c == 'u' || c == 'd' || c == 'i' || c == 'x' || c == 'X')
		return (1);
	return (0);
}

int		work_zero(t_element *stock)
{
	stock->zero = '0';
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		size_digit(long n)
{
	int		value;

	value = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n = n / 10;
		value++;
	}
	return (value);
}

int		size_hexa(unsigned long n)
{
	int		value;

	value = 1;
	while (n / 16 > 0)
	{
		n = n / 16;
		value++;
	}
	return (value);
}
