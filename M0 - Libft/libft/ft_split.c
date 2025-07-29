/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 23:51:26 by marvin            #+#    #+#             */
/*   Updated: 2025/07/23 23:51:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* 1 - Special case: If separator is '\0'                                     */
/* ************************************************************************** */
static char	**check_c(char const *s)
{
	char	**array;

	array = malloc(sizeof(char *) * 2);
	if (!array)
		return (NULL);
	if (s[0] == '\0')
		array[0] = NULL;
	else
	{
		array[0] = ft_strdup(s);
		if (!array[0])
		{
			free(array);
			return (NULL);
		}
	}
	array[1] = NULL;
	return (array);
}

/* ************************************************************************** */
/* 2 - Count number of substrings in s                                        */
/* ************************************************************************** */
static size_t	find_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

/* ************************************************************************** */
/* 3 - Free memory from split array                                           */
/* ************************************************************************** */
static void	free_split(char **array, int j)
{
	while (j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
}

/* ************************************************************************** */
/* 4 - Fill array with substrings from s                                      */
/* ************************************************************************** */
static char	**substring(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			array[j] = ft_substr(s, start, i - start + 1);
			if (!array[j])
				return (free_split(array, j - 1), NULL);
			j++;
		}
		i++;
	}
	array[j] = NULL;
	return (array);
}

/* ************************************************************************** */
/* 5 - Main ft_split                                                          */
/* ************************************************************************** */
char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num_substrings;

	if (!s)
		return (NULL);
	if (c == '\0')
		return (check_c(s));
	num_substrings = find_words(s, c);
	array = malloc((num_substrings + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (substring(array, s, c));
}
