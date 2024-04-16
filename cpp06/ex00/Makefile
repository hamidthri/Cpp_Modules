# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 18:38:53 by htaheri           #+#    #+#              #
#    Updated: 2024/04/16 18:40:30 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCs = main.cpp

all: $(NAME)

$(NAME): $(SRCs)
	$(CC) $(CFLAGS) $(SRCs) -o $(NAME)

clean:
	rm -f $(OBJs)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re