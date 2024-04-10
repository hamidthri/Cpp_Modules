# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 13:00:57 by htaheri           #+#    #+#              #
#    Updated: 2024/04/08 16:08:59 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp  ShrubberyCreationForm.cpp  RobotomyRequestForm.cp PresidentialPardonForm.cpp Form.cpp  main.cpp


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) -rf $(OBJS)

fclean: clean
	$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re