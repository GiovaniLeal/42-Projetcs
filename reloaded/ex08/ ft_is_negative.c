/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_is_negative.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:17:47 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 10:23:48 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char sinal)
{
    write(1, &sinal, 1);
}

void    ft_is_negative(int n)
{
    char    nb_is;

    if ( n < 0)
    {
        nb_is = 'N';
        ft_putchar(nb_is);
    }
    else 
    {
        nb_is = 'P';
        ft_putchar(nb_is);
    }
    
}

int     main(void)
{
    ft_is_negative(0);
    return(0);
}