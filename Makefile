# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 08:44:40 by rhutchin          #+#    #+#              #
#    Updated: 2019/05/22 13:21:55 by rhutchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

SRC = *.c
OBJ = *.o

INCL = libft.h

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

