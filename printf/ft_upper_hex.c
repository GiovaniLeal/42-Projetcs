/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:42:21 by marvin            #+#    #+#             */
/*   Updated: 2025/08/10 18:42:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(char *str, unsigned long nb, int *index)
{
	int	rest;

	if (nb >= 16)
		ft_convert(str, nb / 16, index);
	rest = nb % 16;
	if (rest < 10)
		str[(*index)++] = rest + '0';
	else
		str[(*index)++] = (rest - 10) + 'A';
}

static int	ft_count_digits(unsigned long nb)
{
	int	count;

	if (nb == 0)
		return 1;
	count = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		count++;
	}
	return count;
}

int	ft_upper_hex(unsigned long long number)
{
	char	*str;
	int		i;

	if (number == 0)
	{
		ft_print_str("0");
		return 1;
	}
	i = 0;
	str = malloc(sizeof(char) * (ft_count_digits(number) + 3));
	if (!str)
		return 0;
	ft_convert(str, number, &i);
	str[i] = '\0';
	ft_print_str(str);
	free(str);
	return i;
}