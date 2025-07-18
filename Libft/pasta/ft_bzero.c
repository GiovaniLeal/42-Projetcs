/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:09:45 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 19:09:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_bzero(void *s, size_t n)
{
	size_t	current_bt;
	unsigned char*	new_buffer;

	current_bt = 0;
	new_buffer = (unsigned char *) s;

	while(current_bt < n)
	{
		new_buffer[current_bt] = 0;
		current_bt++;
	}

	return ((void *)new_buffer);
}