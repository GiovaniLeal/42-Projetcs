/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:26:13 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 16:15:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sqrt(int nb)
{
    int     number;

    number = 1;
    if (nb < 0) 
        return(0);
    if (nb == 0 || nb == 1)
        return(nb);
    while (number * number <= nb)
    {
        if (number * number == nb)
            return number;
        number++;
    }
    return(0);
}