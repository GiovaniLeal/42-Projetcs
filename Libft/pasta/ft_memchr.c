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


//search for c in n bytes of *s
void	*ft_memchr(const void *s, int c, size_t n) 
{
	unsigned char	*s_bytes;
	unsigned char	unsign_char_c;

	s_bytes = (unsigned char *)s;
	unsign_char_c = (unsigned char)c;
	while (n--)
	{
		if (*s_bytes == unsign_char_c)
			return (s_bytes);
		s_bytes++;
	}
	return (NULL);
}
