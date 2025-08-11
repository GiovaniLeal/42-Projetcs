# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 13:50:56 by marvin            #+#    #+#              #
#    Updated: 2025/08/08 13:50:56 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
MAINTEST = test_printf
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_printf.c \
      ft_print_char.c \
      ft_print_str.c \
      ft_convert_hex.c \
      ft_print_numb.c \
      ft_print_unsigned_nb.c \
      ft_lower_hex.c \
      ft_upper_hex.c \
      ft_count_digits.c

OBJ = $(SRC:.c=.o)

all: $(NAME) 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re

