# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 18:02:31 by htaheri           #+#    #+#              #
#    Updated: 2024/04/27 16:37:50 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++

FLAGs = -Wall -Werror -Wextra -std=c++98

SRCs = main.cpp
HDRs = easyfind.hpp

all: $(NAME)

$(NAME): $(SRCs) $(HDRs)
	$(CC) $(FLAGs) $(SRCs) -o $(NAME)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re