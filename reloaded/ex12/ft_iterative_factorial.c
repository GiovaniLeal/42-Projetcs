/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:38:20 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 16:01:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   ft_iterative_factorial(int nb)
{
    int     temp;

    if (nb < 0) 
    {
        return (0);
    }
    temp = 1;
    while (nb > 0)
    {
        temp = temp * nb;
        nb --;
    }
    return (temp);
}
