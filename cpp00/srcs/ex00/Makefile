# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 12:07:47 by htaheri           #+#    #+#              #
#    Updated: 2024/02/19 12:47:30 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGs = -Wall -Wextra -Werror -std=c++98

CC = c++
RM = rm -f
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGs) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re