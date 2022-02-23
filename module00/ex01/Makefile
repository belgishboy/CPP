NAME	= phonebook

SRC	=	main.cpp \
		contact_class.cpp \

OBJ	= $(SRC:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Werror -Wextra

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(MAKE) clean

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re