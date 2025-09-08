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

#include "ft_printf_bonus.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int ret1, ret2;

    long long pos = 42;
    long long neg = -123;
    unsigned int uval = 4294967295u; // UINT_MAX
    unsigned int xval = 0x1A3F;

    printf("----- TESTE DECIMAIS (%%d/%%i) -----\n");
    ret1 = printf("'%10.5d'\n", (int)pos);
    ret2 = ft_printf_bonus("'%10.5d'\n", (int)pos);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("'%-7i'\n", (int)neg);
    ret2 = ft_printf_bonus("'%-7i'\n", (int)neg);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("'%-+8d'\n", (int)pos);
    ret2 = ft_printf_bonus("'%-+8d'\n", (int)pos);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("'%8.5d'\n", (int)pos);
    ret2 = ft_printf_bonus("'%8.5d'\n", (int)pos);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    printf("----- TESTE UNSIGNED (%%u) -----\n");
    ret1 = printf("'%10u'\n", (unsigned int)uval);
    ret2 = ft_printf_bonus("'%10u'\n", (unsigned int)uval);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("'%-10u'\n", (unsigned int)uval);
    ret2 = ft_printf_bonus("'%-10u'\n", (unsigned int)uval);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    printf("----- TESTE HEXADECIMAL (%%x/%%X) -----\n");
    ret1 = printf("'%10x'\n", xval);
    ret2 = ft_printf_bonus("'%10x'\n", xval);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("'%-10X'\n", xval);
    ret2 = ft_printf_bonus("'%-10X'\n", xval);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    ret1 = printf("%0#10x\n", xval);
    ret2 = ft_printf_bonus("'0#10x'\n", xval);
    printf("Retornos: printf=%d | ft_printf_bonus=%d\n\n", ret1, ret2);

    return 0;
}


