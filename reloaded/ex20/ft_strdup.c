/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:29:36 by marvin            #+#    #+#             */
/*   Updated: 2025/07/10 18:29:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	index;
	char	*copy;

	index = 0;
	while (src[index])
	{
		index++;
	}
	copy = (char*) malloc(sizeof(char) * (index + 1));
	if (!copy)
	{
		return NULL;
	}
	index = 0;
	while (src[index])
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return copy;
}
