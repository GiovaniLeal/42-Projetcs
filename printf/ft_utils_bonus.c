/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:42:34 by marvin            #+#    #+#             */
/*   Updated: 2025/08/25 14:42:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	*ft_memset_bonus(void  *s , int c, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n--)
	{
		*s_ptr++ = (unsigned char)c;
	}
	return (s);
}

int	ft_isdigit_bonus(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_strlen_bonus(char *str)