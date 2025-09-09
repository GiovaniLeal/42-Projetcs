/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:56:17 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/09 10:56:17 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/***************   CREATE NEW NODE   ***************/
t_node	*ft_node_create(const char *string, size_t len)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->str_content = malloc(len);
	if (!new_node->str_content)
	{
		free(new_node);
		return (NULL);
	}
	ft_memcpy(new_node->str_content, string, len);
	new_node->len = len;
	new_node->next = NULL;
	return (new_node);
}

/***************   CREATE FORMATTED NODE   ***************/
t_node	*ft_node_formatted(const char **format_ptr, va_list arg)
{
	t_node		*formatted_node;
	const char	*formatted_str;

	if (!format_ptr || !*format_ptr)
		return (NULL);
	formatted_str = ft_dispatcher(*format_ptr, arg);
	if (!formatted_str)
		return (NULL);
	formatted_node = ft_node_create(formatted_str, ft_strlen(formatted_str));
	free((void *)formatted_str);
	(*format_ptr)++;
	return (formatted_node);
}
