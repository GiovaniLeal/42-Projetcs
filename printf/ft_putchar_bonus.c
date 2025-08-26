/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:56:22 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/25 13:56:22 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_fill_buffer(int width, int c, string_fmt *str)
{
	int		count;
	char	*buffer;

	count = 0;
	buffer = malloc(width + 1);
	if (!buffer)
		return (-1);
	if (str->minus)
	{
		buffer[0] = c;
		ft_memset_bonus(buffer + 1, ' ', width - 1);
	}
	else
	{
		ft_memset_bonus(buffer, ' ', width - 1);
		buffer[width - 1] = c;
	}
	buffer[width] = '\0';
	count = ft_printstr_bonus(buffer);
	free(buffer);
	return (count);
}

int	ft_putchar_bonus(string_fmt *str, int c)
{
	int	size;

	size = str->width;
	if (str->width > 1)
	{
		return (ft_fill_buffer(size, c, str));
	}
	else
		return (write (1, &c, 1));
}
