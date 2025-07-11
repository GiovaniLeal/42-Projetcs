/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:35:32 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 15:48:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char nb)
{
    write(1, &nb, 1);
}

void    ft_print_numbers(void)
{
    char     current_nb;

    current_nb = 48;
    while (current_nb < 58)
    {
        ft_putchar(current_nb);
        current_nb++;
    }
}