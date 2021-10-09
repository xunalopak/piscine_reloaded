SRC = srcs/ft_putchar \
		srcs/ft_putstr \
		srcs/ft_strcmp \
		srcs/ft_strlen \
		srcs/ft_swap
OBJ = $(SRC:.c=.o)

CC = gcc -Werror -Wextra -Wall

NAME = libft.a

AR	= ar rc

LIB		= ranlib

HEAD = ./includes/

all: ${NAME}

.c.o:
		${CC} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}
		${LIB} ${NAME}

clean:
        rm -f $(OBJ)

fclean: clean
        rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
