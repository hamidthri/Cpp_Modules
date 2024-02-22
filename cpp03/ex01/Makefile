# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 14:06:19 by htaheri           #+#    #+#              #
#    Updated: 2024/02/22 15:29:05 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

all: $(NAME)
	
$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
	rm -rf $(OBJS)

fclean: clean	
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

