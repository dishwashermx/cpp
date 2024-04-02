# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 11:08:12 by ghwa              #+#    #+#              #
#    Updated: 2024/04/02 10:28:17 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++11
FILES = Phonebook.cpp Main.cpp Contact.cpp
NAME = phonebook

all:$(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re