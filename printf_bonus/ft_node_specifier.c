/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:11:27 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/04 15:11:27 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/*************** INIT T_FORMAT ***************/
static void	ft_format_init(t_format *f)
{
	f->flags = 0;
	f->width = 0;
	f->precision = -1;
	f->specifier = 0;
}

/*************** PARSE FLAGS ***************/
static void	ft_parse_flags(const char **fmt, t_format *f)
{
	while (**fmt == '-' || **fmt == '+' || **fmt == ' '
		|| **fmt == '#' || **fmt == '0')
	{
		if (**fmt == '-')
			f->flags |= FLAG_MINUS;
		else if (**fmt == '+')
			f->flags |= FLAG_PLUS;
		else if (**fmt == ' ')
			f->flags |= FLAG_SPACE;
		else if (**fmt == '#')
			f->flags |= FLAG_HASH;
		else if (**fmt == '0')
			f->flags |= FLAG_ZERO;
		(*fmt)++;
	}
}

/*************** PARSE WIDTH ***************/
static void	ft_parse_width(const char **fmt, t_format *f, va_list args)
{
	if (**fmt == '*')
	{
		f->width = va_arg(args, int);
		if (f->width < 0)
		{
			f->flags |= FLAG_MINUS;
			f->width *= -1;
		}
		(*fmt)++;
	}
	while (**fmt >= '0' && **fmt <= '9')
	{
		f->width = (f->width * 10) + (**fmt - '0');
		(*fmt)++;
	}
}

/*************** PARSE PRECISION ***************/
static void	ft_parse_precision(const char **fmt, t_format *f, va_list args)
{
	if (**fmt != '.')
		return ;
	(*fmt)++;
	f->precision = 0;
	if (**fmt == '*')
	{
		f->precision = va_arg(args, int);
		if (f->precision < 0)
			f->precision = -1;
		(*fmt)++;
	}
	while (**fmt >= '0' && **fmt <= '9')
	{
		f->precision = (f->precision * 10) + (**fmt - '0');
		(*fmt)++;
	}
}

/*************** CREATE NODE FOR SPECIFIER ***************/
t_node	*ft_node_specifier(const char **format, va_list args)
{
	t_format	struct_format;
	t_node		*node;
	char		*formatted_str;
	size_t		len;

	ft_format_init(&struct_format);
	ft_parse_flags(format, &struct_format);
	ft_parse_width(format, &struct_format, args);
	ft_parse_precision(format, &struct_format, args);
	if (*format && **format)
	{
		struct_format.specifier = **format;
		(*format)++;
	}
	formatted_str = ft_dispatcher_bonus(&struct_format, args);
	if (!formatted_str)
		return (NULL);
	len = ft_strlen(formatted_str);
	node = ft_node_create(formatted_str, len);
	free(formatted_str);
	return (node);
}
