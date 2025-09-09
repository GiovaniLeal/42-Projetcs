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

const char    *ft_dispatcher(const char *format, va_list args)
{
    const char    *formated_str;

    formated_str = NULL;
     if (*format == 'c')
        formated_str = ft_put_char((char)va_arg(args, int));
    else if (*format == '%')
        formated_str = ft_put_char('%');
    else if (*format == 's')
        formated_str = ft_strdup(va_arg(args, char *));
    else if (*format == 'd' || *format == 'i')
	    formated_str = ft_put_num(*format, va_arg(args, int));
    else if (*format == 'u')
	    formated_str = ft_put_num(*format, va_arg(args, unsigned int));
    else if (*format == 'x' || *format == 'X')
	    formated_str = ft_put_hex(*format, va_arg(args, unsigned int));
    else if (*format == 'p')
	    formated_str = ft_put_ptr(va_arg(args, void *));
    return (formated_str);    
}
