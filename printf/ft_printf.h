/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:25:03 by marvin            #+#    #+#             */
/*   Updated: 2025/08/08 14:25:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_convert_hex(void *ptr);
int	ft_print_numb(int number);
int	ft_printf(const char *format, ...);
int	ft_lower_hex(int number);
int	ft_upper_hex(int number);
int	ft_print_unsigned_nb(unsigned int number);
int	ft_count_digits(unsigned long nb);

#endif
