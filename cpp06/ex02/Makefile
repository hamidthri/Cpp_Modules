# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 20:19:57 by htaheri           #+#    #+#              #
#    Updated: 2024/04/18 20:21:06 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
RM = rm -f
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re