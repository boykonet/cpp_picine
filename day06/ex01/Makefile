NAME = serialize

FLAGS = -Wall -Wextra -Werror

SRCS =			./serialize.cpp \
				./deserialize.cpp \
				./main.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =		./Data.hpp

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