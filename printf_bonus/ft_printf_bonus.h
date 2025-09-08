/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:29:46 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/04 11:29:46 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
#include "ft_printf.h"
/* --------- BITMASK FOR FLAGS --------- */
# define FLAG_MINUS 1
# define FLAG_PLUS  2
# define FLAG_SPACE 4
# define FLAG_HASH  8
# define FLAG_ZERO 16
/*************** NODE/LIST STRUCT ***************/
typedef struct s_format
{
	int		flags;
	int		width;
	int		precision;
	char	specifier;
}	t_format;
/*************** PRINTF BONUS ***************/
int		ft_printf(const char *format, ...);
int		ft_printf_bonus(const char *format, ...);
char	*ft_dispatcher_bonus(t_format *f, va_list args);

/* width / precision */
char	*ft_apply_width_bonus(char *str, t_format *f);
char	*ft_apply_precision_bonus(char *str, t_format *f);
char	*ft_apply_precision_num(t_format *f, char *num_str, int is_negative);

/* adapted format functions */
char	*ft_format_char_bonus(t_format *f, char c);
char	*ft_format_string_bonus(t_format *f, char *s);
char	*ft_format_num_bonus(t_format *f, long long n);
char	*ft_format_hex(t_format *f, unsigned long long numb);

#endif
