/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:26:13 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 13:52:33 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sqrt(int nb)
{
    int     number;

    number = 2;
    while ( number * number != nb && number <= nb/2)
    {
        number++;
    }
    if (number * number == nb)
    {
        return(number);
    }
    else
    {
        return(0);
    }
}