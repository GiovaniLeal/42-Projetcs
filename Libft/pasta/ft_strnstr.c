/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:giovani giovani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:44:01 bygiovani            #+#    #+#             */
/*   Updated: 2025/07/18 23:44:01 bygiovani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n )
{
	size_t index_h;
	size_t index_n;

	index_h = 0;
	if (!*needle)
		return ((char *)haystack);

	while (haystack[index_h] != '\0' && index_h < n)
	{
		index_n = 0;
		while ((index_h + index_n) < n 
			&& haystack[index_h + index_n] == needle[index_n] 
			&& needle[index_n] != '\0')
		{
			index_n++;
		}
		if (needle[index_n] == '\0')
			return ((char *)&haystack[index_h]);
		index_h++;
	}
	return (NULL);	
}
