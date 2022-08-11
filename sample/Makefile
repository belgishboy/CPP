NAME	= Sample

SRC	=	main.cpp \
		$(NAME).cpp \

OBJ	= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic-errors

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(MAKE) clean

grind: 
	$(MAKE)
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -rf $(OBJ)
	rm test

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

test: test.cpp
	$(CC) $(FLAGS) test.cpp -o test