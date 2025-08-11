/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:29:18 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 18:29:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_nb(char *str, long number, int *i)
{
	if (number >= 10)
		ft_put_nb(str,number / 10, i);
	str[(*i)++] = (number % 10) + '0';
}
static int	count_digits(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;;
		nb *= -1;
	}	
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	ft_print_numb(int num)
{
	char	*str;
	int	i;
	long number = num;

	i = 0;
	str = malloc(sizeof(char) * (count_digits(number) + 1));
	if (!str)
		return (0);
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
	}	
	ft_put_nb(str, number, &i);
	str[i] = '\0';
	ft_print_str(str);
	free(str);
	return (i);	
}
