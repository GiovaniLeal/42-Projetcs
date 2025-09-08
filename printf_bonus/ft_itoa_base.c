/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:22:20 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/06 21:22:20 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_itoa_base_buffer(long long n, const char *base,
				char *buffer, int *start_index)
{
	int					base_len;
	unsigned long long	abs_value;
	int					index;

	base_len = ft_strlen(base);
	index = 64;
	buffer[index--] = '\0';

	// Tratamento seguro de número negativo (evita underflow)
	if (n < 0)
		abs_value = (unsigned long long)(-(n + 1)) + 1;
	else
		abs_value = (unsigned long long)n;

	if (abs_value == 0)
		buffer[index--] = '0';

	while (abs_value > 0)
	{
		buffer[index--] = base[abs_value % base_len];
		abs_value /= base_len;
	}

	if (n < 0)
		buffer[index--] = '-';

	*start_index = index + 1;
}

char	*ft_itoa_base(long long n, const char *base)
{
	char	buffer[65];
	int		start_index;

	if (ft_strlen(base) < 2)
		return (NULL);

	ft_itoa_base_buffer(n, base, buffer, &start_index);
	return (ft_strdup(&buffer[start_index]));
}

