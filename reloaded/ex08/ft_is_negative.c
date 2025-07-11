/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:17:47 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 15:51:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char sinal)
{
    write(1, &sinal, 1);
}
void    ft_is_negative(int n)
{
    if ( n < 0)
    {
        ft_putchar('N');
    }
    else 
    {
        ft_putchar('P');
    }    
}