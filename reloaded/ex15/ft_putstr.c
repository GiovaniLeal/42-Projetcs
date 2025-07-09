/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:54:28 by giodos-s          #+#    #+#             */
/*   Updated: 2025/07/09 14:25:09 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
  int   index;

  index = 0;
  while(str[index] != '\0')
  {
    ft_putchar(str[index]);
    index++;
  }
}

int     main(void)
{
    char str[] = "Giovani";
    ft_putstr(str);
    return(0);
}