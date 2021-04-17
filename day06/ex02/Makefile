NAME = identify

FLAGS = -Wall -Wextra -Werror

SRCS =			./main.cpp

OBJS = $(SRCS:%.cpp=%.o)

INCLUDE = ./

CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(INCLUDE) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re