# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 11:08:12 by ghwa              #+#    #+#              #
#    Updated: 2024/03/05 13:50:39 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++11
NAME = phonebook

all:$(NAME)

$(NAME): Phonebook.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re