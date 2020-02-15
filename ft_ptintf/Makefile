NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
DFLAGS = $(FLAGS) -g
LIBFT = ./libft
PRINTF = ./printf
LFT_HEADER = $(LIBFT)/libft.h
PRINTF_HEADER =	$(PRINTF)/ft_printf.h
FT_COMPILED =	ft_putchar.o \
				ft_putstr.o \
				ft_strlen.o \
				ft_strcat.o \
				ft_strncat.o \
				ft_strlcat.o \
				ft_strcpy.o \
				ft_strncpy.o \
				ft_strdup.o \
				ft_strcmp.o \
				ft_strncmp.o \
				ft_strstr.o \
				ft_strnstr.o \
				ft_strchr.o \
				ft_strrchr.o \
				ft_isalpha.o \
				ft_isdigit.o \
				ft_isalnum.o \
				ft_isprint.o \
				ft_isascii.o \
				ft_tolower.o \
				ft_toupper.o \
				ft_bzero.o \
				ft_memset.o \
				ft_memchr.o \
				ft_memcmp.o \
				ft_memcpy.o \
				ft_memccpy.o \
				ft_memmove.o \
				ft_atoi.o \
				ft_memalloc.o \
				ft_memdel.o \
				ft_strnew.o \
				ft_strdel.o \
				ft_strclr.o \
				ft_striter.o \
				ft_striteri.o \
				ft_strmap.o \
				ft_strmapi.o \
				ft_strequ.o \
				ft_strnequ.o \
				ft_strsub.o \
				ft_strjoin.o \
				ft_strtrim.o \
				ft_strsplit.o \
				ft_itoa.o \
				ft_putendl.o \
				ft_putnbr.o \
				ft_putchar_fd.o \
				ft_putstr_fd.o \
				ft_putendl_fd.o \
				ft_putnbr_fd.o \
				ft_lstnew.o \
				ft_lstdelone.o \
				ft_lstdel.o \
				ft_lstadd.o \
				ft_lstiter.o \
				ft_lstmap.o \
				ft_strrev.o \
				ft_ltoa.o

PRINTF_COMPILED = free_conv.o \
				  ft_printf.o \
				  init_conv.o \
				  number_conv.o \
				  parser.o \
				  print.o \
				  print_blank.o \
				  print_conversion.o \
				  string_conv.o \
				  misc.o \
				  print_num.o \
				  float.o \
				  error.o \
				  float_2.o \

COMPILED = $(FT_COMPILED) $(PRINTF_COMPILED)

all: $(NAME)

$(NAME): $(COMPILED)
	ar rc $(NAME) $(COMPILED)
	ranlib $(NAME)

$(FT_COMPILED): %.o: $(LIBFT)/%.c $(LFT_HEADER)
	$(CC) -c $(DFLAGS) -I $(LIBFT) $< -o $@

$(PRINTF_COMPILED): %.o: $(PRINTF)/%.c $(PRINTF_HEADER)
	$(CC) -c $(DFLAGS) -I $(LIBFT) -I $(PRINTF) $< -o $@

clean:
	rm -f $(COMPILED)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean
