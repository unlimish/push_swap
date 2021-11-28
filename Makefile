NAME = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRCS =	src/push_swap.c \
		src/err_handler.c

LIB_DIR = lib/
LIB = lib/libft.a

OBJ = $(SRCS:.c=.o)

INC =	-I inc/ \
		-I lib/
HEADER =	inc/push_swap.h

all: $(NAME)


$(NAME):${LIB} ${SRCS}
		cd $(LIB_DIR) && make
		$(CC) -g $(INC) $(FLAGS) $(SRCS) $(LIB) -o $(NAME)

$(LIB): $(LIB_DIR)
		make -C lib

clean:
		rm -rf $(OBJ)
		cd $(LIB_DIR) && make clean

fclean: clean
		rm -rf $(NAME)
		cd $(LIB_DIR) && make fclean

re: fclean all

.PHONY: re clean fclean all
