# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 17:14:18 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/28 17:15:21 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = claptrap
SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(C) $(CFLAGS) -o $@ -c $^

# Clean object files
clean:
	rm -f $(OBJS)

# Full clean (objects + binary)
fclean: clean
	rm -f $(NAME)

# Rebuild target
re: fclean all

# Debug rule to run valgrind
debug: $(NAME)
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

# Phony targets
.PHONY: all clean fclean re debug