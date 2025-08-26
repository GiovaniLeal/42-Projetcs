/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:32:45 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/20 19:32:45 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_fmt(char fmt, va_list args)
{
	if (fmt == '%')
		return (ft_putchar_count('%'));
	if (fmt == 'c')
		return (ft_putchar_count(va_arg(args, int)));
	if (fmt == 's')
		return (ft_putstr_count(va_arg(args, char *)));
	if (fmt == 'd' || fmt == 'i')
		return (ft_putnbr(fmt, va_arg(args, int)));
	if (fmt == 'u')
		return (ft_putnbr(fmt, va_arg(args, unsigned int)));
	if (fmt == 'x' || fmt == 'X')
		return (ft_putnbr_hex(fmt, (unsigned long)va_arg(args, unsigned int)));
	if (fmt == 'p')
		return (ft_putnbr_hex(fmt, (unsigned long)va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && *(fmt + 1))
			count += ft_check_fmt(*++fmt, args);
		else
			count += ft_putchar_count(*fmt);
		fmt++;
	}
	va_end(args);
	return (count);
}
