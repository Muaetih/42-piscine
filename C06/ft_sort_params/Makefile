NAME = sort

SRC = ft_sort_params.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: clean all