# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 15:22:53 by marvin            #+#    #+#              #
#    Updated: 2025/07/11 15:22:53 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = cc 
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
SRCS =	srcs/ft_isalpha.c \
	srcs/ft_isdigit.c \
	srcs/ft_isalnum.c

OBJS = $(SRCS:.c=.o)

$(NAME).a: $(OBJS)
	ar rcs $(NAME).a $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:$(NAME).a
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME).a
re: fclean all 		