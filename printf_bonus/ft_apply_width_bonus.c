/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_width_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:52:52 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/05 12:52:52 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char *ft_apply_width_bonus(char *str, t_format *f)
{
    size_t len = ft_strlen(str);
    if ((int)len >= f->width)
        return str; // largura menor que comprimento

    char *res = malloc(f->width + 1);
    if (!res)
        return NULL;

    size_t pad = f->width - len;
    size_t idx = 0;

    if (f->flags & FLAG_MINUS)
    {
        // left align
        ft_memcpy(res, str, len);
        idx = len;
        while (idx < (size_t)f->width)
            res[idx++] = ' ';
    }
    else
    {
        // right align
        char pad_char = ' ';
        // usa '0' só se FLAG_ZERO e sem precisão
        if ((f->flags & FLAG_ZERO) && f->precision < 0)
            pad_char = '0';

        // se tiver sinal e pad_char == '0', sinal vem primeiro
        if ((str[0] == '-' || str[0] == '+') && pad_char == '0')
        {
            res[idx++] = str[0];
            ft_memset(res + idx, pad_char, pad);
            ft_memcpy(res + idx + pad, str + 1, len - 1);
        }
        else
        {
            ft_memset(res, pad_char, pad);
            ft_memcpy(res + pad, str, len);
        }
    }

    res[f->width] = '\0';
    free(str);
    return res;
}

