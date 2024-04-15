# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 13:21:07 by htaheri           #+#    #+#              #
#    Updated: 2024/04/15 14:29:29 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
RM = rm -rf
FLAGs = -Wall -Wextra -Werror -std=c++98

CC = c++

SRCs = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGs) $(SRCs) -o $(NAME)

clean:
	$(RM) $(OBJs)
fclean: $(clean)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
	