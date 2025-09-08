/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:02:59 by marvin            #+#    #+#             */
/*   Updated: 2025/09/06 23:02:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int main(void)
{
    int ret1, ret2;

    int neg = -123;
    int pos = 42;
    unsigned int uval = UINT_MAX;
    unsigned int xval = 0x1A3F;
    char *str = "hello";
    char c = 'A';
    void *ptr = &pos;

    printf("===== TESTE COMPLETO ft_printf_bonus =====\n\n");

    /* ---------- %d / %i ---------- */
    ret1 = printf("|%d| |%i|\n", neg, neg);
    ret2 = ft_printf_bonus("|%d| |%i|\n", neg, neg);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* Flags + e espaço */
    ret1 = printf("|%+d| |% d|\n", pos, pos);
    ret2 = ft_printf_bonus("|%+d| |% d|\n", pos, pos);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* Largura mínima e alinhamento */
    ret1 = printf("|%8d| |%-8d|\n", pos, pos);
    ret2 = ft_printf_bonus("|%8d| |%-8d|\n", pos, pos);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* Precisão */
    ret1 = printf("|%.5d| |%.0d|\n", pos, 0);
    ret2 = ft_printf_bonus("|%.5d| |%.0d|\n", pos, 0);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %u ---------- */
    ret1 = printf("|%u| |%10u| |%.10u|\n", uval, uval, uval);
    ret2 = ft_printf_bonus("|%u| |%10u| |%.10u|\n", uval, uval, uval);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %x / %X ---------- */
    ret1 = printf("|%x| |%X| |%#x| |%#X| |%08x|\n", xval, xval, xval, xval, xval);
    ret2 = ft_printf_bonus("|%x| |%X| |%#x| |%#X| |%08x|\n", xval, xval, xval, xval, xval);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %s ---------- */
    ret1 = printf("|%s| |%10s| |%.3s| |%10.3s|\n", str, str, str, str);
    ret2 = ft_printf_bonus("|%s| |%10s| |%.3s| |%10.3s|\n", str, str, str, str);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %c ---------- */
    ret1 = printf("|%c| |%5c| |%-5c| |%c|\n", c, c, c, '\0');
    ret2 = ft_printf_bonus("|%c| |%5c| |%-5c| |%c|\n", c, c, c, '\0');
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %p ---------- */
    ret1 = printf("|%p| |%20p|\n", ptr, ptr);
    ret2 = ft_printf_bonus("|%p| |%20p|\n", ptr, ptr);
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    /* ---------- %% ---------- */
    ret1 = printf("|%%| |%%5%%| |%%-5%%|\n");
    ret2 = ft_printf_bonus("|%%| |%%5%%| |%%-5%%|\n");
    printf("Retornos: printf=%d / ft_printf=%d\n\n", ret1, ret2);

    return 0;
}


