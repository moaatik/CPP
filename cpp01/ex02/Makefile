SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS =  -std=c++98 -Wall -Wextra -Werror

NAME = BrainPoint

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
