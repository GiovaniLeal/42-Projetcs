/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:56:34 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/28 14:56:34 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
//Locate the first occurrence of the substring needle in the len characters
/* ************************************************************************** */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n )
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (n > ft_strlen(haystack))
		n = ft_strlen(haystack);
	while (i < n && *haystack)
	{
		j = 0;
		while (needle[j] && (i + j) < n && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
