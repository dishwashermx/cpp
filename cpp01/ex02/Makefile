# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 17:58:23 by ghwa              #+#    #+#              #
#    Updated: 2024/04/18 15:30:03 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++11
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = zombie

all:$(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(NAME)

re: clean all

.PHONY: all fclean re