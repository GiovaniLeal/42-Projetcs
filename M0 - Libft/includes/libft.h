/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:02:07 by marvin            #+#    #+#             */
/*   Updated: 2025/07/11 15:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit( int digit);
int	ft_isalnum(int character);
int	ft_isascii(int character);
int	ft_isprint(int c);
int	ft_strlen(char *array_str);
void	*ft_memset(void *buffer, int value, size_t size);
void	*ft_bzero(void * buffer, size_t size);

#endif