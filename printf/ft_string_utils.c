/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:22:00 by giodos-s          #+#    #+#             */
/*   Updated: 2025/09/09 11:22:00 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*************** STRING FUNCTIONS ***************/
int	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		return (6);
	while (s[count])
		count++;
	return ((int)count);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	if (!s)
		return (ft_strdup("(null)"));
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	dup[len] = '\0';
	return (dup);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, len1);
	ft_memcpy(joined + len1, s2, len2);
	joined[len1 + len2] = '\0';
	return (joined);
}

/*************** MEMORY FUNCTIONS ***************/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_bytes;
	const unsigned char	*src_bytes;

	if (!dest && !src && n > 0)
		return (NULL);
	dest_bytes = (unsigned char *)dest;
	src_bytes = (const unsigned char *)src;
	while (n-- > 0)
	{
		*dest_bytes = *src_bytes;
		dest_bytes++;
		src_bytes++;
	}
	return (dest);
}
