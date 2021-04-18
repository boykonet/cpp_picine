NAME = array

FLAGS = -Wall -Wextra -Werror

SRCS =			./main.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =		./Array.hpp

INCLUDE = ./

CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(INCLUDE) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
