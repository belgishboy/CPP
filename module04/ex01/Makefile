NAME	= Animal

SRC	=	$(NAME).cpp \
		Brain.cpp \
		Dog.cpp	\
		Cat.cpp	\
		main.cpp \

OBJ	= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic-errors

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(MAKE) clean

grind: 
	$(MAKE)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


run:
	$(MAKE) re
	./$(NAME)
