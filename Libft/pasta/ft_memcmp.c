/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:18:50 by marvin            #+#    #+#             */
/*   Updated: 2025/07/18 23:18:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_byte;
	unsigned char *s2_byte;
	size_t index;

	index = 0;
	s1_byte = (unsigned char*)s1;
	s2_byte = (unsigned char*)s2;
	while (index < n)
	{
		if (s1_byte[index] != s2_byte[index])
		{
			return(s1_byte[index] - s2_byte[index]);
		}
		index++;
	}
	return (0);
}
