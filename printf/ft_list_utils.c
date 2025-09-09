/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:46:04 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/09 10:46:04 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_list_clear(t_node **head)
{
	t_node	*temp;

	if (!head)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		free((*head)->str_content);
		free(*head);
		*head = temp;
	}
}

void	ft_list_append(t_node **head, t_node *node)
{
	t_node		*temp;

	if (!*head)
	{
		*head = node;
		return ;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
}
