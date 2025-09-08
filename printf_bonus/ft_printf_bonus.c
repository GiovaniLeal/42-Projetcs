/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:24:36 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/04 12:24:36 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/*************** NODE DE TEXTO ***************/
static t_node	*ft_node_text(const char *start, const char *end)
{
	size_t	len;

	if (!start || !end || start >= end)
		return (NULL);
	len = end - start;
	return (ft_node_create(start, len));
}

/*************** PARSER DE FORMAT STRING ***************/
static t_node	*ft_parser_format_list(const char *format,
		va_list arg, t_node **head)
{
	const char	*start;
	t_node		*current_node;

	start = format;
	while (*format)
	{
		if (*format == '%')
		{
			current_node = ft_node_text(start, format);
			if (current_node)
				ft_list_append(head, current_node);
			format++;
			current_node = ft_node_specifier(&format, arg);
			if (current_node)
				ft_list_append(head, current_node);
			start = format;
		}
		else
			format++;
	}
	current_node = ft_node_text(start, format);
	if (current_node)
		ft_list_append(head, current_node);
	return (*head);
}

/*************** FT_PRINTF BONUS ***************/
int	ft_printf_bonus(const char *format, ...)
{
	int		count;
	int		len;
	t_node	*head_list;
	t_node	*temp_node;
	va_list	arg;

	if (!format)
		return (0);
	count = 0;
	len = 0;
	head_list = NULL;
	va_start(arg, format);
	head_list = ft_parser_format_list(format, arg, &head_list);
	temp_node = head_list;
	while (temp_node)
	{
		len = ft_strlen(temp_node->str_content);
		write(1, temp_node->str_content, len);
		count += len;
		temp_node = temp_node->next;
	}
	va_end(arg);
	ft_list_clear(&head_list);
	return (count);
}
