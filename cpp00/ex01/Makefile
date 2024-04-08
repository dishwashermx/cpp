# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 11:08:12 by ghwa              #+#    #+#              #
#    Updated: 2024/04/08 16:08:29 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++11
SRCS = PhoneBook.cpp Main.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook

all:$(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re