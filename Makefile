NAME	=	libftprintf.a

SRC	=	ft_printf.c				\
		print_char_len.c		\
		print_decimal_len.c		\
		print_string_len.c		\
		print_pointer_len.c		\
		print_hexalow_len.c		\
		print_hexaup_len.c		\
		print_unsigned_len.c	\


SRC_LIBF	=	libft/ft_putstr_fd.c \
				libft/ft_strdup.c \
				libft/ft_strlen.c \
				libft/ft_itoa.c \
				libft/ft_putchar_fd.c \

OBJS = $(SRC:.c=.o)
OBJS_LIBF = $(SRC_LIBF:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar -rcs

$(NAME): $(OBJS) $(OBJS_LIBF)
	$(AR) $(NAME) $(OBJS) $(OBJS_LIBF)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re
