/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:04:44 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 16:04:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count_char;

	count_char = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		count_char += ft_print_char(*str++);
	}
	return (count_char);
}