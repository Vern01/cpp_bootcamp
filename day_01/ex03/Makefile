# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 12:53:27 by vivan-de          #+#    #+#              #
#    Updated: 2017/05/23 18:18:17 by vivan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent

NAME = zombieHorde

CLANG = clang++ -Wall -Werror -Wextra

OBJ = main.o Zombie.o ZombieHorde.o

all: $(NAME)

$(NAME): $(OBJ)
			$(CLANG) -g3 -o $(NAME) $(OBJ)
			@echo "Binary file is ready."

clean:
	/bin/rm -f $(OBJ)
	echo "Removed all the ".o" files."

fclean: clean
	/bin/rm -f $(NAME)
	echo "Removed the binary file."

re: fclean all
