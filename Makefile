# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 12:26:32 by pdeguing          #+#    #+#              #
#    Updated: 2018/08/02 19:33:38 by pdeguing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLAG = -Wall -Wextra -Werror
SRC = board.c fillit.c get_input.c get_min.c \
	 	place_tpiece.c point_coord.c point_new.c \
		recursion.c tetro_array.c tetro_fill.c \
		tetro_new.c usage_display.c verify_char.c \
		verify_connections.c verify_input.c \
		verify_line.c verify_nbrhash.c \
		verify_nbrline.c verify_tetro.c verify_max.c
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
