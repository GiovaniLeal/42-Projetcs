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
void	*ft_bzero(void * buffer, size_t size)
{
	size_t	index;
	unsigned char*	new_buffer;

	index = 0;
	new_buffer = (unsigned char *) buffer;

	while(index < size)
	{
		new_buffer[index] = 0;
		index++;
	}
}