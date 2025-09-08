/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 00:30:08 by marvin            #+#    #+#             */
/*   Updated: 2025/09/07 00:30:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stddef.h> // para size_t

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p = (unsigned char *)ptr;
    size_t i;

    for (i = 0; i < num; i++)
        p[i] = (unsigned char)value;

    return ptr;
}

