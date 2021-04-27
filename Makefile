SRCS = 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c	ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c

OBJS = $(SRCS:.c=.o)

INCLUDE = ./

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :	${OBJS}
	ar rcs ${NAME} $?

.c.o:
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re	: fclean all

.PHONY: all clean fclean re

