/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:07:05 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 17:10:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int argc, char *argv[])
{
    int     i;
    int     current_arg;
    
    current_arg = 1;
    while(current_arg < argc)
    {
        i = 0;
        while(argv[current_arg][i] != '\0')
        {
            ft_putchar(argv[current_arg][i]);
            i++;
        }
        ft_putchar('\n');
        current_arg++;
    }
    return(0);
}
