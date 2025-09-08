# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 22:46:41 by marvin            #+#    #+#              #
#    Updated: 2025/09/06 22:46:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

NAME    = libftprintf.a

SRCS    = ft_printf_bonus.c \
          ft_dispatcher_bonus.c \
          ft_format_num_bonus.c \
          ft_format_hex.c \
          ft_format_char_bonus.c \
          ft_format_string_bonus.c \
          ft_apply_width_bonus.c \
          ft_apply_precision_bonus.c \
          ft_list_clear.c \
          ft_list_append.c \
          ft_node_create.c \
          ft_node_specifier.c \
          ft_strdup.c \
          ft_strlen.c \
          ft_memcpy.c \
          ft_utoa_base.c \
          ft_itoa_base.c \
          ft_strjoin.c \
          ft_printf.c \
          main_bonus.c \
          ft_memset.c

OBJS    = $(SRCS:.c=.o)
HEADERS = ft_printf_bonus.h

# ----------------------
# RULES
# ----------------------

all: $(NAME)

# Build library (without main)
$(NAME): $(filter-out main_bonus.o,$(OBJS))
	$(AR) $(NAME) $(filter-out main_bonus.o,$(OBJS))

# Compile object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile test executable (link with library)
test_bonus: $(NAME) main_bonus.o
	$(CC) $(CFLAGS) main_bonus.o -L. -lftprintf -o test_bonus

# Clean object files
clean:
	$(RM) $(OBJS)

# Full clean
fclean: clean
	$(RM) $(NAME) test_bonus

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re test_bonus

