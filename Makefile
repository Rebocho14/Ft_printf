NAME      = libftprintf.a
CC        = cc
CFLAGS    = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT     = $(LIBFT_DIR)/libft.a

SRC       = ft_printf.c \
            ft_printchars.c \
            ft_print_numbers.c \
			ft_hexa.c
OBJ       = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re