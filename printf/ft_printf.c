/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:45:53 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 14:45:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(const char *format, va_list arg)
{
	int	count_char;

	count_char = 0;
	if (*format == 'c')
		count_char += ft_print_char((char)va_arg(arg, int));
	if (*format == 's')
		count_char += ft_print_str((char *)va_arg(arg, int *));
	if (*format == 'p')
		count_char += ft_convert_hex(va_arg(arg, void *));
	if (*format == 'd')
		count_char += ft_print_numb(va_arg(arg, int));
	if (*format == 'i')
		count_char += ft_print_numb(va_arg(arg, int));
	if (*format == 'u')
		count_char += ft_print_unsigned_nb((unsigned int)va_arg(arg, int));
	if (*format == 'x')
		count_char += ft_lower_hex((unsigned long long)va_arg(arg, unsigned int));
	if (*format == 'X')
		count_char += ft_upper_hex((unsigned long long)va_arg(arg, unsigned int));
	if (*format == '%')
		count_char += ft_print_char('%');
	return (count_char);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		total_char;

	total_char = 0;
	va_start(arguments, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			total_char += ft_check_format(format, arguments);
			format++;
		}
		else
		{
			total_char += ft_print_char(*format);
			format++;
		}
	}
	va_end(arguments);
	return (total_char);
}
