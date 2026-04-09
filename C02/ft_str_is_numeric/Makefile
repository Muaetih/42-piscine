NAME = numeric

SRC = ft_str_is_numeric.c main.c 

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all