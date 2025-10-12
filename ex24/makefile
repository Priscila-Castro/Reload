// criei um arquivo para armazenar todas as minhas funcoes compiladas 
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I. ./includes
.PHONY: all clean fclean re
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

