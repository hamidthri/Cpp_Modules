# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 14:16:24 by htaheri           #+#    #+#              #
#    Updated: 2024/04/30 19:41:27 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp BitcoinExchange.cpp
HDRS = BitcoinExchange.hpp 

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)
fclean: clean
re: fclean al
.PHONY: all clean fclean re