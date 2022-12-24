SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
TARGET	= libft.a
LIBC	= ar rc
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${TARGET}: ${OBJS}
	${LIBC} ${TARGET} ${OBJS}
	
all: ${TARGET}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
