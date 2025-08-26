/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:10:12 by giodos-s          #+#    #+#             */
/*   Updated: 2025/08/22 12:10:12 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include "ft_printf.h"
# include <stdarg.h> //va_args
# include <stddef.h> //size_t memset

// struct - [flags][widt][.precision][specifier]
typedef struct {
	
	int	minus;
	int	plus;
	int	space;
	int	zero;
	int	hash;
	int	width;
	int	precision;
	char	specifier;
} string_fmt;

//funções principais
int	ft_printf_bonus(const char *format, ...);
int	ft_parsing_bonus(const char **format, va_list args, string_fmt *string);


//funções de conversão
int	ft_putchar_bonus(string_fmt *str, int c);


//funções da libft
int	ft_strlen_bonus(char *str);
void	*ft_memset_bonus(void  *s , int c, size_t n);
int	ft_isdigit_bonus(int c);

#endif