# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giodos-s <giodos-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 11:37:58 by mgiodos-s         #+#    #+#              #
#    Updated: 2025/09/09 11:37:58 by mgiodos-s        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# ======================================================
# VARIABLES
# ======================================================
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

# Source files - ajuste os nomes conforme seu ex00
SRC     = ft_printf.c\
	ft_dispatcher.c \
	ft_list_utils.c \
	ft_node_utils.c \
	ft_number_utils.c \
	ft_string_utils.c \

# Object files
OBJ     = $(SRC:.c=.o)

# Library name
NAME    = libftprintf.a

# ======================================================
# RULES
# ======================================================

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
