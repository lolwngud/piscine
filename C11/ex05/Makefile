SRCS	= srcs/main.c srcs/operator.c
OBJS	= ${SRCS:.c=.o}
TARGET	= do-op
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror


all:
	${CC} ${CFLAGS} ${SRCS} -o ${TARGET}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
