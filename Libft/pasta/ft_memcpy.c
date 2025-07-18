/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:13:35 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 11:44:26 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  current_bt;
    unsigned char   *new_dest;
    const unsigned char   *new_src;

    current_bt = 0;
    new_dest = (unsigned char *) dest;
    new_src = (unsigned char *) src;


    while (current_bt < n)
    {
        new_dest[current_bt] = new_src[current_bt];
        current_bt++;
    }
    return (new_dest);
}