# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 22:02:38 by gkarina           #+#    #+#              #
#    Updated: 2021/01/22 22:02:38 by gkarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror

SRCS =		./megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
