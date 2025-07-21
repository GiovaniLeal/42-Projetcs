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

// Locate the first occurrence of the substring needle in the first len characters of haystack.
char	*ft_strnstr(const char *haystack, const char *needle, size_t n )
{
	size_t i;
	size_t j;

	i= 0;
	j = 0;

	if (!*needle)
		return ((char *)haystack);

	while (i < n && *haystack) 
	{
		while ((i + j) < n && haystack[i + j] == needle[j])
			j++;
		if( needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return(NULL); 	
}
