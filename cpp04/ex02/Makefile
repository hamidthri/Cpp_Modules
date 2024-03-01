# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 15:43:18 by htaheri           #+#    #+#              #
#    Updated: 2024/02/26 20:11:53 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimal

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = AAnimal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re
