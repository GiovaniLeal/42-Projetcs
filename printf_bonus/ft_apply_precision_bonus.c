/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:47:09 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/05 13:47:09 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

#include "ft_printf_bonus.h"
#include <stdlib.h> // malloc

/*
 * ft_precision_num
 * Gera uma nova string com zeros de precisão aplicados
 * - str: número original em string
 * - len: comprimento do número sem sinal
 * - prec: precisão desejada
 * - is_negative: se o número é negativo (1) ou não (0)
 */
static char *ft_precision_num(char *str, size_t len, size_t prec, int is_negative)
{
    size_t total_len = (prec > len) ? prec : len;
    char *res = malloc(total_len + is_negative + 1);
    if (!res)
        return NULL;

    size_t idx = 0;

    // Adiciona sinal se negativo
    if (is_negative)
        res[idx++] = '-';

    // Adiciona zeros de precisão
    size_t zeros_to_add = (prec > len) ? prec - len : 0;
    for (size_t i = 0; i < zeros_to_add; i++)
        res[idx++] = '0';

    // Copia o número
    ft_memcpy(res + idx, str + is_negative, len);
    idx += len;

    // Finaliza string
    res[idx] = '\0';
    return res;
}

/*
 * ft_apply_precision_bonus
 * Aplica a precisão ao número fornecido como string
 * - str: número em string
 * - f: estrutura de formatação contendo a precisão
 */
char *ft_apply_precision_bonus(char *str, t_format *f)
{
    int is_neg = (str[0] == '-') ? 1 : 0;
    size_t len = ft_strlen(str) - is_neg;

    if (f->precision < 0 || len >= (size_t)f->precision)
        return ft_strdup(str); // sem alteração se precisão menor que tamanho
    if (f->precision == 0 && str[0] == '0')
        return ft_strdup(""); // caso especial para zero com precisão zero

    return ft_precision_num(str, len, f->precision, is_neg);
}


