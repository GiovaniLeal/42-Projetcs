/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:07:05 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 15:43:35 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int argc, char *argv[])
{
    int     current_c;
    int     current_argc;

    current_argc = 1;
    current_c = 0;
    while (current_argc < argc)
    {
        while(argv[current_argc] != '\0')
        {
            ft_putchar(argv[current_c]);
            current_c++;
        }
        write(1,' ', 1);
    }
    return(0);
}
