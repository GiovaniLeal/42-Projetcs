/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:giovani giovani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:01:31 bygiovani            #+#    #+#             */
/*   Updated: 2025/07/18 22:01:31 bygiovani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *s, int c, size_t n)
{
	size_t	index;
	unsigned char uc;
	unsigned char * s_bytes;

	index = 0;
	uc = (unsigned char)c;
	s_bytes = (unsigned char *)s;
	
	while (index < n)
	{
		if (s_bytes[index] == uc)
		{
			return (&s_bytes[index]);
		}	
		index++;
	}
	return (NULL);
}