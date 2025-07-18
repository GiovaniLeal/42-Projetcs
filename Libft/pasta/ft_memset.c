/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:57:07 by marvin            #+#    #+#             */
/*   Updated: 2025/07/15 17:57:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void*	ft_memset(void *buffer, int value, size_t size)
{
	size_t	index;
	unsigned char *	new_buffer;

	new_buffer = buffer;
	index = 0;
	while (index < size)
	{
		new_buffer[index] =(unsigned char)value;
		index++;
	}
	return(new_buffer);	
}