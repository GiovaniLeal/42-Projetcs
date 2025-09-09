# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 11:37:58 by marvin            #+#    #+#              #
#    Updated: 2025/09/09 11:37:58 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# ======================================================
# VARIABLES
# ======================================================
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

SRC_OBG     = ft_printf.c ft_dispatcher.c ft_list_utils.c ft_node_utils.c ft_number_utils.c ft_string_utils.c
SRC         = $(SRC_OBG)
OBJ         = $(SRC:.c=.o)
HEADERS     = ft_printf.h
LIB         = libft.a

# ======================================================
# RULES
# ======================================================

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean all

