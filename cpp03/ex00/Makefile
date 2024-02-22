# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 13:15:37 by htaheri           #+#    #+#              #
#    Updated: 2024/02/22 13:23:19 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = C++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re