/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:35:03 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/22 12:35:03 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_print_args(va_list args, string_fmt *str)
{
	if (str->specifier == 'c')
		return (ft_putchar_bonus(str, va_arg(args, int)));
	if (str->specifier == 's')
		return (ft_putstr_bonus(str, va_arg(args, char *)));
}

int	ft_printf_bonus(const char *format, ...)
{
	int				count;
	va_list			args;
	string_fmt	string;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format++ == '%')
		{
			ft_parsing_bonus(&format, args, &string);
			count += ft_print_args(args, &string);
		}
		else
			count += write(1, format++, 1);
	}
	va_end(args);
	return (count);
}
