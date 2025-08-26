/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:25:03 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/20 19:25:03 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(char fmt, long nb)
{
	int				count;
	unsigned long	num;

	count = 0;
	if ((fmt == 'd' || fmt == 'i'))
	{
		if (nb < 0)
		{
			count += ft_putchar_count('-');
			num = -nb;
		}
		else
			num = nb;
	}
	else
		num = (unsigned long)nb;
	if (num >= 10)
		count += ft_putnbr(fmt, num / 10);
	count += ft_putchar_count("0123456789"[num % 10]);
	return (count);
}

