/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_string_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:09:56 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/05 15:09:56 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_format_string_bonus(t_format *f, char *s)
{
	char	*string;
	char	*temp;
	size_t	len;

	if (!s)
		s = "(null)";
	string = ft_strdup(s);
	if (!string)
		return (NULL);
	len = ft_strlen(string);
	if ((f->precision >= 0) && ((size_t)f->precision < len))
	{
		temp = malloc(f->precision + 1);
		if (!temp)
		{
			free(string);
			return (NULL);
		}
		ft_memcpy(temp, string, f->precision);
		temp[f->precision] = '\0';
		free(string);
		string = temp;
	}
	return (ft_apply_width_bonus(string, f));
}
