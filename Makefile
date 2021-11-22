NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRCS =	src/push_swap.c \
		src/err_handler.c

OBJ = $(SRCS:.c=.o)

INC = -I inc/
HEADER =	inc/push_swap.h

all: $(NAME)


$(NAME):$(SRCS)
		$(CC) -g $(INC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
