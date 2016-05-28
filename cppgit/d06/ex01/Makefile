NAME = serialize

SRC = ./serialize.cpp\

OBJ = $(SRC:.cpp=.o)

.PHONY: all
all : $(NAME)

$(NAME) : $(SRC)
	@g++ -Wall -Wextra -Werror -c $?
	@g++ -o $(NAME) $(OBJ)
	@echo "$(NAME) compil done."

.PHONY: clean
clean:
	@rm -f $(OBJ)
	@echo "file .o clean"

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)
	@echo "file $(NAME) clean"

.PHONY: re
re: fclean all
