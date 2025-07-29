/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:33:14 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 16:33:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// encontra o indice de inicio e de fim 
static int	find_trim_index(char const *s, char const *set, int direction)
{
	int	find;
	int	i;

	if (direction == 1)
		find = 0;
	if (direction == -1)
		find = ft_strlen(s) - 1;
	while ((direction == 1 && find < (int)ft_strlen(s))
		|| (direction == -1 && find >= 0))
	{
		i = 0;
		while (set[i] && set[i] != s[find])
			i++;
		if (set[i] == '\0')
			return (find);
		else
			find += direction;
	}
	return (find);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		end;
	int		start;
	size_t	total_sub_len;

	if (!s || !set)
		return (NULL);
	start = find_trim_index(s, set, 1);
	end = find_trim_index(s, set, -1);
	if (start > end)
		return (ft_substr(s, 0, 0));
	total_sub_len = end - start + 1;
	return (ft_substr(s, start, total_sub_len));
}
