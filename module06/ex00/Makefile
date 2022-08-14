NAME	= convert

SRC	=	main.cpp \

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

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	$(MAKE) re
	./$(NAME)

.PHONY: all clean fclean re
