# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 05:17:03 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/04 05:34:29 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = claptrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all