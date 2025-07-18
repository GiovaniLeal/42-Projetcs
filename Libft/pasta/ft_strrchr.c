/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:17:10 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 18:08:04 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *pointer;

    i = ft_strlen(s);
    pointer = (char *)s;


    while(s[i] != c && s[i] != '\0')
    {
        i--;
    }

    if (s[i] == c)
    {
        pointer[0] = s[i];
        return (&pointer[0]);
    }
   
    if (s[i] == '\0' && c == '\0')
    {
        return (&pointer[i]);
    }
    
    return (NULL);
}  
