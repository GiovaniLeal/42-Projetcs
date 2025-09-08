/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:02:35 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/04 17:02:35 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char *ft_dispatcher_bonus(t_format *f, va_list args)
{
    char *result = NULL;

    if (f->specifier == 'c')
        result = ft_format_char_bonus(f, (char)va_arg(args, int));
    else if (f->specifier == '%')
        result = ft_format_char_bonus(f, '%');
    else if (f->specifier == 's')
        result = ft_format_string_bonus(f, va_arg(args, char *));
    else if (f->specifier == 'd' || f->specifier == 'i')
        result = ft_format_num_bonus(f, va_arg(args, int));            // int correto
    else if (f->specifier == 'u')
        result = ft_format_num_bonus(f, va_arg(args, unsigned int));  // unsigned correto
    else if (f->specifier == 'p')
        result = ft_format_hex(f, (unsigned long long)va_arg(args, void *));
    else if (f->specifier == 'x' || f->specifier == 'X')
        result = ft_format_hex(f, va_arg(args, unsigned int));

    return result;
}


/*Test the flags '.', '-' and 0.
Test the %-d with INT_MIN
Test the - flag with any value.
Test the 0 flag like %04d.
Test the '.' with multiple precisions.
For every test, verify the return value matches the original one.
For each working flag, give 1 point.
If all the flags work, give 2 bonus points.
Rate it from 0 (failed) through 5 (excellent)

# + space

Check all the conversions with the flags '#', '+' and space with all the other flag combinations.
For each working flag, give 1 point.
If all the flags work, give 2 bonus points.*/