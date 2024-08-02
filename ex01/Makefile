# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 11:58:26 by tsurma            #+#    #+#              #
#    Updated: 2024/08/02 10:43:06 by tsurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -g3 -std=c++98
NAME = phonebook
MAKEFLAGS = --no-print-directory

SRC = PhoneBook.cpp Contact.cpp start.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
