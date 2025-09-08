/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:27:46 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/06 20:27:46 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static char	*ft_string_hex(char *hex_str, t_format *f)
{
	char	*prefixed;
	char	*result;
	char	*str_precision;

	str_precision = ft_apply_precision_bonus(hex_str, f);
	if (str_precision != hex_str)
		free(hex_str);
	if (!str_precision)
		return (NULL);
	if ((f->flags & FLAG_HASH) && hex_str[0] != '0')
	{
		if (f->specifier == 'X')
			prefixed = ft_strjoin("0X", str_precision);
		else
			prefixed = ft_strjoin("0x", str_precision);
		free(str_precision);
		if (!prefixed)
			return (NULL);
		result = prefixed;
	}
	else
		result = str_precision;
	return (result);
}

static char	*ft_pointer_to_hex(char *hex_str)
{
	char	*prefixed;

	prefixed = ft_strjoin("0x", hex_str);
	free(hex_str);
	if (!prefixed)
		return (NULL);
	return (prefixed);
}

char	*ft_format_hex(t_format *f, unsigned long long numb)
{
	char	*str_hex;
	char	*formatted;

	if (f->specifier == 'X')
	{
		str_hex = ft_utoa_base(numb, BASE_HEX_UPP);
	}
	else
		str_hex = ft_utoa_base(numb, BASE_HEX);
	if (!str_hex)
		return (NULL);
	if (f->specifier == 'p')
		formatted = ft_pointer_to_hex(str_hex);
	else
		formatted = ft_string_hex(str_hex, f);
	if (!formatted)
		return (NULL);
	return (ft_apply_width_bonus(formatted, f));
}
