NAME = strupcase

SRC = ft_strupcase.c

OBJ = $(SRC:.c=.0)

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