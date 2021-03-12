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

SRCS =				./replaceString.cpp \
					./openCloseFile.cpp \
					./err.cpp \
					./main.cpp

HEADERS = ./file.hpp

INCLUDEDIR = ./

OBJS = $(SRCS:%.cpp=%.o)

CC = clang++

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) -I $(INCLUDEDIR) -o $@ ./main.cpp

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -I $(INCLUDEDIR) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
