/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:33:40 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/18 16:16:40 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*STRING CHR - Returns a pointer to the first occurence of character c in s   */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cast_s;

	i = 0;
	cast_s = (char *)s;
	while (cast_s[i] != '\0')
	{
		if (cast_s[i] == (char)c)
			return ((char *)&cast_s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&cast_s[i]);
	return (NULL);
}	
