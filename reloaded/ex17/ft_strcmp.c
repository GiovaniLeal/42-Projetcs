/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:25:35 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 15:58:40 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    putchar( int nb)
{
    char conver_nb;

    if (nb < 0)
    {
        conver_nb = '-';
        write(1, &conver_nb, 1);
        nb *= -1;
        putchar(nb); 
    }
    else
    {
        conver_nb = nb + '0';
        write(1, &conver_nb, 1);
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    int     index;
    int     index_2;

    index = 0;
    index_2 = 0;
    while (s1[index] != '\0')
    {
        while (s2[index_2] != '\0')
        {
            index_2++;
        }
        index++;
    }
    if (s1[index] > s2[index])
    {
        return(1);
    }
    if (s1[index] < s2[index])
    {
        return(-1);
    }
    else
    {
        return(0);
    }
    
}

int     main(void)
{
    char     s1[] ="ABC";
    char    s2[] = "ABC ";
    int     result;

    result = ft_strcmp(s1,s2);
    putchar(result);
    return(0);
}