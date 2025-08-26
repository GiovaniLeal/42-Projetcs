/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:07:18 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/21 13:07:18 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex_base(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex_base(n / 16, base);
	count += ft_putchar_count(base[n % 16]);
	return (count);
}

int	ft_putnbr_hex(char fmt, unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	if (fmt == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (fmt == 'p')
	{
		if (n == 0)
			return (write(1, "(nil)", 5));
		count += write(1, "0x", 2);
	}
	count += ft_putnbr_hex_base(n, base);
	return (count);
}
