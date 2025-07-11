/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:55:34 by marvin            #+#    #+#             */
/*   Updated: 2025/07/10 18:55:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range_array;
	int	index;
	
	if (min >= max)
	{
		return NULL;
	}
	index = 0;
	range_array = (int *) malloc(sizeof(int) * (max - min));
	while(min < max)
	{		
		range_array[index] = min;
		min++;
		index++;
	}
	return(range_array);
}