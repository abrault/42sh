# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/02 13:50:21 by abrault           #+#    #+#              #
#    Updated: 2014/02/28 17:56:13 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 42sh

SRC = src/main.c \
	  src/display_prompt.c \
	  src/get_command.c \
	  src/exec_command.c \
	  src/special_command.c

LIB = libft/libft.a

LIB_INC = libft/includes/

LIB_DIR = libft

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

$(LIB):
	cd $(LIB_DIR) && $(MAKE)

%.o: %.c
	gcc -c $(CFLAGS) -I./include/ $< -o $@ -I . -I $(LIB_INC)

clean:
	cd $(LIB_DIR) && $(MAKE) clean
	rm -rf $(OBJ)

fclean: clean
	cd $(LIB_DIR) && $(MAKE) fclean
	rm -rf $(NAME)

re: fclean all
