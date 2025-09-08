/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:21:03 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/06 21:21:03 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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
