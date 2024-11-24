CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_check.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c \
		ft_unputnbr.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
all = $(NAME)
$(NAME) : $(OBJ)
		ac rcs $(NAME) $(BOB)
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re