/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:02:13 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/25 17:02:13 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_fill_buffer(char *buf, char *str, int len, string_fmt fmt)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (fmt.minus)
	{
		while (i < len)
		{
			buf[i] = str[i];
			i++;
		}
		while (i < fmt.width)
			buf[i++] = ' ';
	}
	else
	{
		while (i < (fmt.width - len))
			buf[i++] = ' ';
		while (j < len)
			buf[i++] = str[j++];
	}
	buf[i] = '\0';
}

// returns the real string width to print
static int	ft_strlen_prec(char *str, int precision)
{
	int	len;

	len = 0;
	if (precision == 0)
		return (0);
	while (str[len] && (precision < 0 || len < precision))
		len++;
	return (len);
}

int	ft_putstr_bonus(string_fmt fmt, char *str)
{
	int		len;
	int		width;
	char	*buffer;

	if (!str)
		return (write(1, "(null)", 6));
	len = ft_strlen_prec(str, fmt.precision);
	if (fmt.width > len)
		width = fmt.width;
	else
		width = len;
	buffer = malloc(sizeof(char) * (width + 1));
	if (!buffer)
		return (-1);
	ft_fill_buffer(buffer, str, len, fmt);
	write(1, buffer, width);
	free(buffer);
	return (width);
}
