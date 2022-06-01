NAME	= Fight

SRC	=	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

OBJ	= $(SRC:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic-errors

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(MAKE) clean

grind: 
	$(MAKE)
	valgrind --leak-check=full ./$(NAME)
	rm -rf *.dSYM

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
