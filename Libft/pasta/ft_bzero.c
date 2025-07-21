/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:giovani giovani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:09:45 bygiovani            #+#    #+#             */
/*   Updated: 2025/07/15 19:09:45 bygiovani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Erase data in the n bytes of the memory
void	*ft_bzero(void *s, size_t n)
{
	unsigned char *s_bytes;

	s_bytes = (unsigned char *)s;
	while (n--)
	{
		*s_bytes++ = 0;
	}
	return (s);
}
