# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 12:53:27 by vivan-de          #+#    #+#              #
#    Updated: 2017/05/24 07:22:02 by vivan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent

NAME = ex04

CLANG = clang++ -Wall -Werror -Wextra

OBJ = ex04.o

all: $(NAME)

$(NAME): $(OBJ)
			$(CLANG) -o $(NAME) $(OBJ)
			@echo "Binary file is ready."

clean:
	/bin/rm -f $(OBJ)
	echo "Removed all the ".o" files."

fclean: clean
	/bin/rm -f $(NAME)
	echo "Removed the binary file."

re: fclean all
