# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hael-ghd <hael-ghd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:31:19 by hael-ghd          #+#    #+#              #
#    Updated: 2023/12/07 15:48:41 by hael-ghd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c print_adress.c print_char.c print_str.c print_hex.c print_int.c print_uint.c

CC = cc

FLAG = -Wall -Wextra -Werror

OBJ_SRC = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	ar rc $(NAME) $^

%.o: %.c ft_printf.h
	$(CC) $(FLAG) -c $<

clean:
	rm -f $(OBJ_SRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean