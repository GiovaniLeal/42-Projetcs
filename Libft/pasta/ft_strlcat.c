/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:46:34 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 14:39:31 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t cat_value;

    i = 0;
    dst_len = ft_strlen(dst);
    cat_value = ft_strlen(dst) + ft_strlen(src);

    if (dst_len >= size )
    {
        return (ft_strlen(src) + size );
    }
    while (dst_len < size -1 && src[i] != '\0') 
    {
        dst[dst_len] = src[i];
        dst_len++;
        i++;
    }
    dst[dst_len] = '\0';
    return(cat_value);
}