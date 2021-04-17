NAME = convert

FLAGS = -Wall -Wextra -Werror

SRCS =			./Convert.cpp \
				./main.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =		./Convert.hpp

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