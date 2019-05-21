# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 08:44:40 by rhutchin          #+#    #+#              #
#    Updated: 2019/05/20 14:12:17 by rhutchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

SRC = ft_atoi.c
OBJ = ft_atoi.o

INCL = ./includes/libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

