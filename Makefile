# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 12:26:32 by pdeguing          #+#    #+#              #
#    Updated: 2018/07/23 14:55:02 by pdeguing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLAG = -Wall -Wextra -Werror
SRC = *.c
LIB = include/libft.a

all: $(NAME)

$(NAME): $(LIB)
	gcc -o $(NAME) $(CFLAG) $(SRC) -lft -L./include/ 

$(LIB):
	cd include/ && make

clean:
	cd include/ && make clean

fclean: clean
	/bin/rm -f $(NAME)
	cd include/ && make fclean

re: fclean all

.PHONY: clean fclean all re
