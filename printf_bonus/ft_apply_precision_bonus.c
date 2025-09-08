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

/*
 * ft_apply_precision_bonus
 * Aplica precisão e sinal (+, -, espaço) ao número fornecido como string
 * - str: número em string (ex: "42" ou "-123")
 * - f: estrutura de formatação contendo flags e precisão
 * Retorna: nova string alocada pronta para ser usada no nó da lista
 */
char *ft_apply_precision_bonus(char *str, t_format *f)
{
    int     is_neg;
    size_t  len;
    size_t  zeros_to_add;
    size_t  index;
    char    *res;
    char    sign_char;

    is_neg = (str[0] == '-') ? 1 : 0;
    len = ft_strlen(str) - is_neg;

    /* Determina quantos zeros serão adicionados pela precisão */
    zeros_to_add = (f->precision > (int)len) ? (f->precision - len) : 0;

    /* Determina o sinal a ser adicionado */
    if (is_neg)
        sign_char = '-';
    else if (f->flags & FLAG_PLUS)
        sign_char = '+';
    else if (f->flags & FLAG_SPACE)
        sign_char = ' ';
    else
        sign_char = 0;

    /* Aloca espaço suficiente: zeros + len + sinal + '\0' */
    res = malloc(len + zeros_to_add + (sign_char ? 1 : 0) + 1);
    if (!res)
        return (NULL);

    index = 0;

    /* Adiciona o sinal se existir */
    if (sign_char)
        res[index++] = sign_char;

    /* Adiciona zeros da precisão */
    while (zeros_to_add-- > 0)
        res[index++] = '0';

    /* Copia a parte numérica */
    ft_memcpy(res + index, str + is_neg, len);
    index += len;

    res[index] = '\0';
    return (res);
}




