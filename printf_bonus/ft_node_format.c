/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:13:59 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/08 18:28:16 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_dispatcher(const char *f, va_list args)
{
    char    formated_str;

    formated_str = NULL;
     if (*f == 'c')
        formated_str = ft_format_char_bonus();
    else if (f == '%')
        result = ft_format_char_bonus(f, '%');
    else if (f == 's')
        result = ft_format_string_bonus(f, va_arg(args, char *));
    else if (f == 'd' || f'i')
        result = ft_format_num_bonus(f, va_arg(args, int));            // int correto
    else if (f == 'u')
        result = ft_format_num_bonus(f, va_arg(args, unsigned int));  // unsigned correto
    else if (f == 'p')
        result = ft_format_hex(f, (unsigned long long)va_arg(args, void *));
    else if (f == 'x' || f == 'X')
        result = ft_format_hex(f, va_arg(args, unsigned int));

    if (!formated_str)
        return (f);
    return (formated_str);
    
}

t_node  *ft_node_format(const char *format, va_list args)
{
    int     len;
    char    *final_string;
    t_node  *new_node;
    
    final_string = ft_dispatchar(format, args);
    if (!final_string)
        return (NULL);
    len = ft_strlen(final_string);
    new_node = ft_node_create(final_string, len);
    free(final_string);
    return (new_node);
}
