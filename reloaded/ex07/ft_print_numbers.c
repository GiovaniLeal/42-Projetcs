/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:35:32 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 09:59:28 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char nb)
{
    write(1, &nb, 1);
}

void    ft_print_numbers(void)
{
    int     current_nb;

    current_nb = 48;
    while (current_nb < 58)
    {
        ft_putchar(current_nb);
        current_nb++;
    }
}

int     main(void)
{
    ft_print_numbers();
    return(0);
}