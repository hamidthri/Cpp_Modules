
NAME = clapTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

cc = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(cc) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
