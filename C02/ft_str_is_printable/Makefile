NAME = printable

SRC = ft_str_is_printable.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAFGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all