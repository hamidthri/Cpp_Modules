# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 18:00:57 by htaheri           #+#    #+#              #
#    Updated: 2024/04/18 19:00:06 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
RM = rm -f
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Serializer.cpp Data.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re