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

/* --- LIBRARIES [ARGS - MALLOC - WRITE] --- */
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* --------- BITMASK FOR FLAGS --------- */
# define FLAG_MINUS 1
# define FLAG_PLUS  2
# define FLAG_SPACE 4
# define FLAG_HASH  8
# define FLAG_ZERO 16

/* --------- BASE DEFINES --------- */
# define BASE_DEC      "0123456789"
# define BASE_HEX      "0123456789abcdef"
# define BASE_HEX_UPP  "0123456789ABCDEF"

/*************** NODE/LIST STRUCT ***************/
typedef struct s_format
{
	int		flags;
	int		width;
	int		precision;
	char	specifier;
}	t_format;

typedef struct s_node
{
	char			*str_content;
	struct s_node	*next;
}	t_node;

/*************** PRINTF BONUS ***************/
int		ft_printf(const char *format, ...);
int		ft_printf_bonus(const char *format, ...);
char	*ft_dispatcher_bonus(t_format *f, va_list args);

/* width / precision */
char	*ft_apply_width_bonus(char *str, t_format *f);
char	*ft_apply_precision_bonus(char *str, t_format *f);
char *ft_apply_precision_num(t_format *f, char *num_str, int is_negative);

/* adapted format functions */
char	*ft_format_char_bonus(t_format *f, char c);
char	*ft_format_string_bonus(t_format *f, char *s);
char	*ft_format_num_bonus(t_format *f, long long n);
char	*ft_format_hex(t_format *f, unsigned long long numb);

/*************** LIST FUNCTIONS ***************/
void	ft_list_clear(t_node **head);
void	ft_list_append(t_node **head, t_node *node);
t_node	*ft_node_create(const char *string, size_t len);
t_node	*ft_node_specifier(const char **format, va_list args);

/*************** LIB UTILS *********************/
char	*ft_strdup(const char *s);
int		ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_utoa_base(unsigned long long n, const char *base);
char	*ft_itoa_base(long long n, const char *base);
char	*ft_strjoin(const char *s1, const char *s2);
void *ft_memset(void *ptr, int value, size_t num);

#endif
