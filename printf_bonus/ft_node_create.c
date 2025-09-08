/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:31:42 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/04 14:31:42 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_node	*ft_node_create(const char *string, size_t len)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->str_content = malloc(len + 1);
	if (!new_node->str_content)
	{
		free(new_node);
		return (NULL);
	}
	ft_memcpy(new_node->str_content, string, len);
	new_node->str_content[len] = '\0';
	new_node->next = NULL;
	return (new_node);
}
