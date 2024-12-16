SRC = ft_printf.c utils.c
OBJ = $(SRC:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
			ar rcs $(NAME) $(OBJ)

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
