##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile for do_op
##

SRC	=	../sources/my_putstr.c	\
		../sources/my_putchar.c	\
		../sources/my_put_nbr.c	\
		../sources/my_printf.c	\
		../sources/my_put_unsigned.c	\
		../sources/my_put_ulong.c	\
		../sources/wrap_modulo.c	\
		../sources/dtoo.c	\
		../sources/dtob.c	\
		../sources/dtoupperx.c	\
		../sources/my_revstr.c	\
		../sources/my_strlowcase.c	\
		../sources/dtox.c	\
		../sources/flag_stro.c	\
		../sources/flag_p.c	\
		../sources/my_getnbr.c	\
		my_params_to_list_bonus.c	\
		radix_sort_bonus.c	\
		main.c	\
		../sources/my_strlen.c	\
		../sources/check_sort_arg.c	\

OBJ	=	${SRC:%.c=%.o}

NAME	=	push_swap

CPPFLAGS=	-I ../include

CFLAGS	=	-Wall -Wextra -W -Werror

CC	=	gcc

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
