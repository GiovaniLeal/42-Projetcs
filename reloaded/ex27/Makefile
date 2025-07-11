# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 13:19:18 by marvin            #+#    #+#              #
#    Updated: 2025/07/11 13:19:18 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc 
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
SRCS = srcs/ft_display_file.c
OBJS = $(SRCS: .c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(cc) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: 
	$(NAME)
clean: 
	rm -f $(OBJS) 
fclean: clean 
	rm -f $(NAME)
re: fclean all	

