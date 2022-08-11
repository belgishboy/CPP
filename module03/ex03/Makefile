NAME	= DiamondTrap

SRC	=	ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
		main.cpp 

OBJ	= $(SRC:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Werror -Wextra -Wshadow -std=c++98 -pedantic-errors

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(MAKE) clean

grind: 
	$(MAKE)
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
