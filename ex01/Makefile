CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98
NAME = phonebook
MAKEFLAGS = --no-print-directory

SRC = PhoneBook.cpp Contact.cpp start.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
