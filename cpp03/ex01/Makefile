SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = ScavTrap

all: $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTraphpp
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
