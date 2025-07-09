/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_recursive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:12:18 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 13:25:46 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int    ft_recursive_factorial(int nb)
{
    int     current_nb;

    current_nb = 1;
    while ( nb > 0) 
    {
        current_nb *= nb;
        ft_recursive_factorial(current_nb);
        nb--;
    }
    return(current_nb);

}

