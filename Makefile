NAME = libftprintf.a

SRC = \
	ft_printf.c \
	printf_print_addr.c \
	printf_print_hex.c \
	printf_print_unsigned.c \
	printf_putchar.c \
	printf_putnbr.c \
	printf_putstr.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
