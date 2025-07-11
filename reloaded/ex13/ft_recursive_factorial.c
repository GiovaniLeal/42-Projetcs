/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:12:18 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 16:08:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return(0);
    }
    if (nb == 0)
    {
        return(1);
    }
    return(nb * ft_recursive_factorial(nb - 1));
}

