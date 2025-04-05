NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = src/main.c src/utils.c src/operations/push.c \
       src/operations/swap.c src/operations/rotate.c \
       src/sort/small_sort.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re