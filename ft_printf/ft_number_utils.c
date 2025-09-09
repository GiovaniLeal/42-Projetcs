/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:32:05 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/09 11:32:05 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_put_hex(const char specifier, unsigned int n)
{
	if (specifier == 'x')
		return (ft_utoa_base((unsigned long long)n, BASE_HEX));
	else
		return (ft_utoa_base((unsigned long long)n, BASE_HEX_UPP));
}

char	*ft_put_num(const char specifier, long long numb)
{
	if (specifier == 'u')
		return (ft_utoa_base((unsigned long long)numb, BASE_DEC));
	else
		return (ft_itoa_base(numb, BASE_DEC));
}
char	*ft_utoa_base(unsigned long long n, const char *base)
{
	char	buffer[65];
	int		base_len;
	int		i;
	char	*res;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	i = 64;
	buffer[i] = '\0';
	while (n > 0)
	{
		buffer[--i] = base[n % base_len];
		n /= base_len;
	}
	res = ft_strdup(&buffer[i]);
	return (res);
}

static void	ft_itoa_base_buffer(long long n, const char *base,
				char *buffer, int *start_index)
{
	int					base_len;
	unsigned long long	abs_value;
	int					index;

	base_len = ft_strlen(base);
	index = 64;
	buffer[index--] = '\0';

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
char	*ft_put_ptr(void *ptr)
{
	char	*hex_str;
	char	*prefixed;
	unsigned long long addr;

	if (!ptr)
		return (ft_strdup("(nil)"));
	addr = (unsigned long long)ptr;
	hex_str = ft_utoa_base(addr, BASE_HEX);
	if (!hex_str)
		return (NULL);
	prefixed = ft_strjoin("0x", hex_str);
	free(hex_str);
	return (prefixed);
}