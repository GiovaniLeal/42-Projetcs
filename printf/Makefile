# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/20 19:05:12 by giodos-s          #+#    #+#              #
#    Updated: 2025/08/20 19:05:12 by giodos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	ft_putstr_count.c \
	ft_putchar_count.c \
	ft_putnbr.c \
	ft_putnbr_hex.c
# BONUS_SRCS =

OBJS = $(SRCS:.c=.o)
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# bonus: all $(BONUS_OBJS)
# 	ar rcs $(NAME) $(BONUS_OBJS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 