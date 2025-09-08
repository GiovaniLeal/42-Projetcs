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

/***************   SIMPLE TEXT NODE   ***************/
static t_node	*ft_node_text(const char *start, const char *end)
{
	size_t	len;

	if (!start || !end || start >= end)
		return (NULL);
	len = end - start;
	return (ft_node_create(start, len));
}

/*************** FORMAT STRING PARSER  ***************/
static t_node	*ft_parser_list(const char *format,
	va_list args, t_node **head_list)
{
	t_node		*curr_node;
	const char	*start;

	start = format;
	while (*format)
	{
		if (*format == '%')
		{
			curr_node = ft_node_text(start, format);
			if (curr_node)
				ft_list_append(head_list, curr_node);
			format++;
			curr_node = ft_node_format(&format, args);
			if (curr_node)
				ft_list_append(head_list, curr_node);
				start = format;
		}
		else
			format++;
	}
	curr_node = ft_node_text(start, format);
	if (curr_node)
		ft_list_append(head_list, curr_node);
	return (*head_list);
}

/*************** FT_PRINTF - PRINT LIST  ***************/
int	ft_printf(const char *format, ...)
{
	int		len;
	int		count;
	t_node	*head_list;
	t_node	*temp_node;
	va_list	args;

	if (!format)
		return (0);
	count = 0;
	va_start(args, format);
	head_list = ft_parser_list(format, args, &head_list);
	temp_node = head_list;
	while (temp_node)
	{
		len = ft_strlen(temp_node->str_content);
		count += (write(1, temp_node->str_content, len));
		temp_node->str_content = temp_node->next;
	}
	va_end(args);
	ft_list_clear(&head_list);
	return (count);
}
