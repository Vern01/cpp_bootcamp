# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 12:53:27 by vivan-de          #+#    #+#              #
#    Updated: 2017/05/24 14:53:23 by vivan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent

NAME = fight

CLANG = clang++ -Wall -Werror -Wextra

OBJ = Weapon.o HumanA.o HumanB.o main.o

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
