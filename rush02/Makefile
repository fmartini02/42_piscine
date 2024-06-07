# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francema <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 22:17:41 by francema          #+#    #+#              #
#    Updated: 2024/06/02 22:45:37 by francema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC =  ft_checks_2.c ft_checks.c ft_print_nb.c \
	ft_sorting.c ft_utils_base.c ft_utils.c get_mtx.c \
	main.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
