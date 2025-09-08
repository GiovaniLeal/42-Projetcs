/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:14:51 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/08 18:24:04 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* --- LIBRARIES [ARGS - MALLOC - WRITE] --- */
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/***************    BASE DEFINE    **************/
# define BASE_DEC      "0123456789"
# define BASE_HEX      "0123456789abcdef"
# define BASE_HEX_UPP  "0123456789ABCDEF"

/*************** NODE/LIST STRUCT **************/
typedef struct s_node
{
	char			*str_content;
	struct s_node	*next;
}	t_node;

int	ft_printf(const char *format, ...);
t_node  *ft_node_format(const char *format, va_list args);
t_node  *ft_node_format(const char *format, va_list args);

/*************** LIST FUNCTIONS ***************/
void	ft_list_clear(t_node **head);
void	ft_list_append(t_node **head, t_node *node);
t_node	*ft_node_create(const char *string, size_t len);
t_node	*ft_node_specifier(const char **format, va_list args);

/*************** LIB UTILS *********************/
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_utoa_base(unsigned long long n, const char *base);
char	*ft_itoa_base(long long n, const char *base);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif
