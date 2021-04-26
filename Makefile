SRCS = memset.c bzero.c memcpy.c memccpy.c 

OBJS = $(SRCS:%.c=%.o)

INCLUDE = ./

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :	${OBJS}
	ar rcs ${NAME} $?

%.o : %.c
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re	: fclean all

.PHONY: all clean fclean re

