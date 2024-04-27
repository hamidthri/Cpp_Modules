# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 18:17:54 by htaheri           #+#    #+#              #
#    Updated: 2024/04/27 17:00:10 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++
FLAGs = -Wall -Wextra -Werror -std=c++98

SRCs = main.cpp Span.cpp
HDRs = Span.hpp
all: $(NAME)

$(NAME): $(SRCs) $(HDRs)
	$(CC) $(FLAGs) $(SRCs) -o $(NAME)

clean:
	rm -rf $(OBJs)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re