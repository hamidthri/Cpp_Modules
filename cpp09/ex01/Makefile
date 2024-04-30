# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 19:42:44 by htaheri           #+#    #+#              #
#    Updated: 2024/04/30 19:43:15 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp RPN.cpp
HDRS = RPN.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)
fclean: clean
re: fclean al
.PHONY: all clean fclean re