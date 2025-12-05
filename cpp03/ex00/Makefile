SRCS = main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror

NAME = ClapTrap

all: $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
