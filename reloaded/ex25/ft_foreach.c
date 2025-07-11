/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:59:16 by marvin            #+#    #+#             */
/*   Updated: 2025/07/11 12:59:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	current_nb;

	current_nb = 0;
	while (current_nb != length)
	{
		f(tab[current_nb]);
		current_nb++;
	}
}
