/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavone <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:56:03 by cnavone           #+#    #+#             */
/*   Updated: 2021/06/19 12:56:19 by cnavone          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_size_nb(unsigned long long nb, int base)
{
	int	count;

	count = 1;
	while (nb >= (unsigned long long)base)
	{
		nb /= base;
		count++;
	}
	return (count);
}
