/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:55:47 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/10 19:55:47 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_num_hex(unsigned long number)
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
