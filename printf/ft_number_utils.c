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

char	*ft_put_hex(char spec, unsigned int n)
{
	if (spec == 'x')
		return (ft_utoa_base((unsigned long long)n, BASE_HEX));
	return (ft_utoa_base((unsigned long long)n, BASE_HEX_UPP));
}

char	*ft_put_num(char spec, long long n)
{
	if (spec == 'u')
		return (ft_utoa_base((unsigned long long)n, BASE_DEC));
	return (ft_itoa_base(n, BASE_DEC));
}

char	*ft_utoa_base(unsigned long long n, const char *base)
{
	char			buf[65];
	int				base_len;
	int				i;
	char			*res;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	i = 64;
	buf[i] = '\0';
	while (n > 0)
	{
		buf[--i] = base[n % base_len];
		n /= base_len;
	}
	res = ft_strdup(&buf[i]);
	return (res);
}

char	*ft_itoa_base(long long n, const char *base)
{
	char				buf[65];
	int					base_len;
	int					i;
	unsigned long long	val;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	i = 64;
	buf[i--] = '\0';
	if (n < 0)
		val = -(unsigned long long)n;
	else
		val = n;
	if (val == 0)
		buf[i--] = '0';
	while (val > 0)
	{
		buf[i--] = base[val % base_len];
		val /= base_len;
	}
	if (n < 0)
		buf[i--] = '-';
	return (ft_strdup(&buf[i + 1]));
}

char	*ft_put_ptr(void *ptr)
{
	char				*hex;
	char				*res;
	size_t				len;
	unsigned long long	addr;

	if (!ptr)
		return ("(nil)");
	addr = (unsigned long long)ptr;
	hex = ft_utoa_base(addr, BASE_HEX);
	if (!hex)
		return (NULL);
	len = ft_strlen(hex) + 2;
	res = malloc(len + 1);
	if (!res)
	{
		free(hex);
		return (NULL);
	}
	res[0] = '0';
	res[1] = 'x';
	ft_memcpy(res + 2, hex, ft_strlen(hex));
	res[len] = '\0';
	free(hex);
	return (res);
}
