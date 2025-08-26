/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:50:37 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/22 19:50:37 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_fill_wdt_presc(const char **fmt, string_fmt *str)
{
	while (ft_isdigit(**fmt))
	{
		str->width = (str->width * 10) + (**fmt - '0');
		(*fmt)++;
	}
	if (str->precision == 0)
	{
		while (ft_isdigit(**fmt))
		{
			str->precision = (str->precision * 10) + (**fmt - '0');
			(*fmt)++;
		}
	}
}

static void	ft_fill_flags(const char **fmt, string_fmt *str)
{
	while (**fmt == '-' || **fmt == '+' || **fmt == ' ' 
		|| **fmt == '0' || **fmt == '#' || **fmt == '.')
	{
		if (**fmt == '-')
			str->minus = 1;
		if (**fmt == '+')
			str->plus = 1;
		if (**fmt == ' ')
			str->space = 1;
		if (**fmt == '0')
			str->zero = 1;
		if (**fmt == '#')
			str->hash = 1;
		if (**fmt == '.')
			str->precision = 0;
		(*fmt)++;
	}
	if (str->minus)
		str->zero = 0;
}

static void	ft_init_fmt(string_fmt *str)
{
	str->minus = 0;
	str->plus = 0;
	str->space = 0;
	str->zero = 0;
	str->hash = 0;
	str->width = 0;
	str->precision = -1;
	str->specifier = 0;
}

static int	ft_is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

void	ft_parsing_bonus(const char **fmt, va_list args, string_fmt *str)
{
	ft_init_fmt(str);
	ft_fill_flags(fmt, str);
	ft_fill_wdt_presc(fmt, str);
	if (ft_is_specifier(**fmt))
		str->specifier = **fmt;
	(*fmt)++;
}
