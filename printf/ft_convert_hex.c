/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:46:25 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 16:46:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hex_rec(uintptr_t num, char *str, int *i)
{
	int	rest;
	if (num >= 16)
		ft_hex_rec(num / 16, str, i);
	rest = num % 16;
	if (rest < 10)
		str[(*i)++] = rest + '0';
	if (rest >= 10)
		str[(*i)++] = (rest - 10) + 'a';
}

static int	ft_count_digits(uintptr_t num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);	
}

int	ft_convert_hex(void *ptr)
{
	int	i;
	char	*str;
	uintptr_t num;

	i = 0;
	if (ptr == NULL)
	{
		ft_print_str("(nil)");
		return (5);
	}
	else
	num = (uintptr_t)ptr;	
	str = malloc (sizeof(char) * (ft_count_digits(num) + 3));
	if (!str)
		return (0);
	str[i++]= '0';
	str[i++] = 'x';
	ft_hex_rec(num, str, &i);
	str[i] = '\0';
	ft_print_str(str);
	free(str);
	return (i);
}
