/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:46:10 by marvin            #+#    #+#             */
/*   Updated: 2025/07/22 15:46:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ctd_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ctd_str = malloc(s1_len + s2_len + 1);
	if (!ctd_str)
		return (NULL);
	ft_memcpy(ctd_str, s1, s1_len);
	ft_memcpy(ctd_str + s1_len, s2, s2_len);
	ctd_str[s1_len + s2_len] = '\0';
	return (ctd_str);
}
