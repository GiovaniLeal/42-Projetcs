/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:43:47 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 12:00:44 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  index;
    unsigned char   *new_dest;
    unsigned char   *new_src;

    index = 0;
    new_dest = (unsigned char *)dest;
    new_src = (unsigned char *)src;

    if (new_src > new_dest)
    {
        while (index < n)
        {
            new_dest[index] = new_src[index];
            index++;
        }
    }
    else 
    {
        while (n--)
        {
            new_dest[n] = new_src[n];
        }
    }
    
    return ((void *)new_dest); 
}
    
    
