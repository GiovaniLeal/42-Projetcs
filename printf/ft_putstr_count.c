/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:21:03 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/20 19:21:03 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_putstr_count("(null)"));
	while (*str)
	{
		count += ft_putchar_count(*str++);
	}
	return (count);
}
