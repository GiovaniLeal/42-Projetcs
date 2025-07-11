/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:29:55 by marvin            #+#    #+#             */
/*   Updated: 2025/07/11 13:29:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include<unistd.h>

int	tryErrors(int args) 
{
	if (args < 2)
	{
		write(2, "File name missing. \n", 19);
		return(1);
	}		
	if (args > 2)
	{
		write(2, "Too many arguments. \n", 20);
		return(1);
	}		
	return(0);	
}

int	main(int argc, char *argv[])
{
	int	file;
	int	bytes_read;
	int	buffer[128];

	if (tryErrors(argc))
	{
		return(1);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(1, "File not found",14);
		return(1);
	}
	while((bytes_read = read(file, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(file);
	return(0);
}