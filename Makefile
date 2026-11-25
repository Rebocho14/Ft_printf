NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC =   ft_printf.c\
		ft_printcharc.c\
		test.c\
		ft_printstr.c\
		ft_printnbr.c\

OBJ = $(SRC:.c=.o)
all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re