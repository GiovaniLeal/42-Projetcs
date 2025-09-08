/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:38:47 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/01 19:38:47 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		return (6);
	while (s[count])
	{
		count++;
	}
	return (count);
}
