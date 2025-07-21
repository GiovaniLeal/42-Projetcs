/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:giovani giovani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 10:50:59 bygiovani            #+#    #+#             */
/*   Updated: 2025/07/20 10:50:59 bygiovani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//skip white spaces 
const char	*skip_white_spaces(const char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	return (str);
}
//detect sign and move pointer
const char	*check_sign(const char *str, int *sign_out)
{
	*sign_out = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign_out = -1;
		str++;		
	}
	return(str);
}
// atoi = convert string to int
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	str = skip_white_spaces(str);
	str = check_sign(str, &sign);	
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (sign * result);
}
