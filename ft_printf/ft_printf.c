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

/*************** FORMAT STRING PARSER ***************/
static t_node	*ft_list_parser(const char *format, va_list args)
{
	t_node	*head_list;
	t_node	*curr_node;
	const char *start;

	head_list = NULL;
	start = format;
	while (*format)
	{
		if (*format == '%')
		{
			if (start < format)
			{
				
				curr_node = ft_node_create(start, format - start);
				if (curr_node)
					ft_list_append(&head_list, curr_node);
			}
			format++;
			curr_node = ft_node_formatted(&format, args);
			if (curr_node)
				ft_list_append(&head_list, curr_node);
			start = format;
		}
		else
			format++;
	}
	if (start < format)
	{
		curr_node = ft_node_create(start, format - start);
		if (curr_node)
			ft_list_append(&head_list, curr_node);
	}
	return (head_list);
}


/*************** FT_PRINTF - PRINT LIST ***************/
int	ft_printf(const char *format, ...)
{
	int	len;
	int	count;
	va_list	args;
	t_node	*head_list;
	t_node	*temp_node;

	if (!format)
		return (0);
	len = 0;
	count = 0;
	va_start(args, format);
	head_list = ft_list_parser(format, args);
	temp_node = head_list;
	while (temp_node)
	{
		len = ft_strlen(temp_node->str_content);
		count += write(1, temp_node->str_content, len);
		temp_node = temp_node->next;
	}
	va_end(args);
	ft_list_clear(&head_list);
	return (count);
}
