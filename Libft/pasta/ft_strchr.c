/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:33:40 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 16:16:40 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char  *find;

    i = 0;
    find = (char *)s;
    
    while (s[i])
    {
        if (s[i] == (char)c)
        {
            return (&find[i]);
        }
        i++;
    }
    
    if (s[i] == '\0' && c == '\0')
    {
        find[i] = s[i];
        return(&find[i]);
    }
    return (NULL);
}