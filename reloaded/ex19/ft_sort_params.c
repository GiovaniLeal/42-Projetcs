/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:07:05 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/10 16:53:23 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_params(int argc, char **args)
{
	int	index;
	int	current_arg;

	current_arg = 1;

	while(current_arg < argc)
	{
		index = 0;
		while(args[current_arg][index] != '\0')
		{
			ft_putchar(args[current_arg][index]);
			index++;
		}
		ft_putchar('\n');
		current_arg++;
	}

}
void	swap_args(char **arg_one, char **arg_two)
{
	char *temp;

	temp = *arg_one;
	*arg_one = *arg_two;
	*arg_two = temp;
}
int	ft_strcmp(char *arg_one, char *arg_two)
{
	while(*arg_one && *arg_one == *arg_two)
	{
		arg_one++;
		arg_two++;
	}
	return((unsigned char)*arg_one - (unsigned char)*arg_two);
}
int	main(int argc, char* argv[])
{
	int	current;
	int	i;

	current = 1;
	while (current < argc - 1)
	{
		i = 1;
		while (i < argc -1)
		{
			if (ft_strcmp(argv[current], argv[current +1]) > 0)
			{
				swap_args(&argv[current], &argv[current +1]);
			}
			i++;
		}
		current++;
	}
	ft_print_params(argc, argv);
	return(0);
}

