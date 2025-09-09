/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:40:30 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/06 22:40:30 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*************** ADD LITERAL NODE STRING ***************/
static void	ft_add_literal_node(t_node **head, const char *start, size_t len)
{
	t_node	*node;

	if (len == 0)
		return ;
	node = ft_node_create(start, len);
	if (node)
		ft_list_append(head, node);
}

/*************** ADD FORMATED NODE ***************/
static void	ft_add_formatted_node(t_node **head,
	const char *format, va_list args)
{
	t_node		*node;
	const char	*formatted_str;
	size_t		len;

	formatted_str = ft_dispatcher(format, args);
	if (!formatted_str)
		return ;
	if (*format == 'c' || *format == '%')
		len = 1;
	else
		len = ft_strlen(formatted_str);
	node = ft_node_create(formatted_str, len);
	if (node)
		ft_list_append(head, node);
	if ((*format != 'c' && *format != '%' && *format != 's')
		&& !(*format == 'p' && formatted_str[0] == '('))
		free((char *)formatted_str);
}

/*************** PARSER  LIST ***************/
static t_node	*ft_list_parser(const char *format, va_list args)
{
	t_node		*head_list;
	const char	*start;

	head_list = NULL;
	start = format;
	while (*format)
	{
		if (*format == '%')
		{
			if (start < format)
				ft_add_literal_node(&head_list, start, format - start);
			format++;
			ft_add_formatted_node(&head_list, format, args);
			format++;
			start = format;
		}
		else
			format++;
	}
	if (start < format)
		ft_add_literal_node(&head_list, start, format - start);
	return (head_list);
}

/*************** FT_PRINTF - PRINT LIST ***************/
int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	t_node	*head_list;
	t_node	*temp_node;

	if (!format)
		return (0);
	count = 0;
	va_start(args, format);
	head_list = ft_list_parser(format, args);
	temp_node = head_list;
	while (temp_node)
	{
		count += write(1, temp_node->str_content, temp_node->len);
		temp_node = temp_node->next;
	}
	va_end(args);
	ft_list_clear(&head_list);
	return (count);
}
