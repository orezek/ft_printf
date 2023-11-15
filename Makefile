NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c utils/ft_convert_number_to_hex.c utils/ft_convert_pointer_to_hex.c utils/ft_hexlen.c utils/ft_itoa.c utils/ft_printf_short.c utils/ft_putchar.c utils/ft_puthex.c utils/ft_puthex_upper.c utils/ft_putnbr.c utils/ft_putnbr_unsigned.c utils/ft_putptr.c utils/ft_putstr.c utils/ft_putstr_upper.c utils/ft_strcpy.c utils/ft_strdup.c utils/ft_strlen.c utils/ft_toupper.c utils/ft_unsigned_itoa.c

MY_OBJECTS = $(SOURCES:.c=.o)

all:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)
	rm -f $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
