CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
NAME = megaphone

all:$(NAME)

$(NAME): Megaphone.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re