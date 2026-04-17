NAME = print

SRC = main.c ft_print_program.c

SRC = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all