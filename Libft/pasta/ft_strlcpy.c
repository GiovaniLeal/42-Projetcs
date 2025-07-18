/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:52:57 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 11:31:11 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t     current_size;

    current_size = 0;
    if (size > 0) 
    {
        while(src[current_size] && current_size < size -1)
         {
            dest[current_size] = src[current_size];
            current_size++;
        }
        dest[current_size] = '\0';
    }
    
    while(src[current_size])
    {
        current_size++;
    }   
    return (current_size); 
}