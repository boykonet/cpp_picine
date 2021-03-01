# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 15:03:36 by gkarina           #+#    #+#              #
#    Updated: 2021/02/27 18:59:53 by gkarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRCS =			./phonebook.cpp \
				./contact.cpp \
				./add_new_contact.cpp \
				./print_contact_data.cpp \
				./print_list.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS = ./contact.hpp

INCLUDE = ./

CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(INCLUDE) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
