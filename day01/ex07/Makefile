# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 14:51:31 by gkarina           #+#    #+#              #
#    Updated: 2021/03/12 14:51:31 by gkarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Wextra -Werror

SRCS =				./File.cpp \
					./main.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS = ./File.hpp

INCLUDEDIR = ./

CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(INCLUDEDIR) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -I $(INCLUDEDIR) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
