NAME = cpy

SRC = ft_strlcpy.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all