/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:38:20 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 13:12:03 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// void    ft_putnumber(int nb)
// {
//     char print_nb;
//     int     aux;

//     if (nb > 9)
//     {
//         aux = nb % 10;
//         ft_putnumber(nb / 10);
//         write(1, &aux,1);
//     }
//         print_nb = nb + '0';
//         write(1, &print_nb, 1);
// }

int   ft_iterative_factorial(int nb)
{
    int     temp;
    
    temp = 1;
    if (nb > 0)
    {
        while (nb > 0)
        {
            temp = temp * nb;
            nb--;
        }
        return(temp);
    }
    else 
    {
        return(0);
    }
}

// int    main(void)
// {
//     ft_iterative_factorial(5);
//     return(0);
// }

