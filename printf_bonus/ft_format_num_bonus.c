/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:29:37 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/05 15:29:37 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf_bonus.h"
#include <stdlib.h>

// Recebe int para %d/%i e unsigned int para %u já convertidos corretamente
static char *ft_format_num_raw(t_format *f, long long n)
{
    if (f->specifier == 'u')
        return ft_utoa_base((unsigned long long)n, BASE_DEC); // unsigned
    else
        return ft_itoa_base(n, BASE_DEC); // signed long long
}

char *ft_format_num_bonus(t_format *f, long long n)
{
    char *raw;
    char *prec;
    char *result;

    // Gera string bruta do número
    raw = ft_format_num_raw(f, n);
    if (!raw)
        return NULL;

    // Aplica precisão usando a função adaptada
    prec = ft_apply_precision_bonus(raw, f);
    free(raw);
    if (!prec)
        return NULL;

    // Aplica largura, criando nova string e liberando a anterior
    result = ft_apply_width_bonus(prec, f);
    return result;
}






