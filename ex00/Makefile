C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = claptrap

SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all