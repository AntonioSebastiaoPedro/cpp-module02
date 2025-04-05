# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/25 09:09:07 by ansebast          #+#    #+#              #
#    Updated: 2025/03/30 18:05:40 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp
CXX = c++
FLAGS = -Wall -Wextra -Werror -g --std=c++98

SRC = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all