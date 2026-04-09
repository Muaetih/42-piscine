
NAME = ft

SRC = ft_ft.c 

OBJ = &(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: &(NAME)

$(NAME) : $(OBJ)
    $(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

clean: fclean all