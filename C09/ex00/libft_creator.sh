#!/bin?sh

rm -rf libft.a
gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
rm -rf *.o
