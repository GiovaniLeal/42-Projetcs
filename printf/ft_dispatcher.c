/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:28:36 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/09 11:28:36 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_put_char(char c, int is_percent)
{
	static char	ch;

	if (is_percent)
	{
		ch = '%';
		return (&ch);
	}
	ch = c;
	return (&ch);
}

const char	*ft_put_str(const char *s)
{
	if (!s)
		return ("(null)");
	return (s);
}

const char	*ft_dispatcher(const char *format, va_list args)
{
	if (*format == 'c')
		return (ft_put_char((char)va_arg(args, int), 0));
	else if (*format == '%')
		return (ft_put_char(0, 1));
	else if (*format == 's')
		return (ft_put_str(va_arg(args, char *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_put_num(*format, va_arg(args, int)));
	else if (*format == 'u')
		return (ft_put_num(*format, va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_put_hex(*format, va_arg(args, unsigned int)));
	else if (*format == 'p')
		return (ft_put_ptr(va_arg(args, void *)));
	return (NULL);
}
